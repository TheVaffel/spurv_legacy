#include <spurv_compiler.h>
#include <uniforms.hpp>

void output_decorate_uniform(uniform_declaration_t ud){
  unsigned int struct_type_num = get_identifier_number((std::string("$") + ud.type).c_str());
  unsigned int name_num = get_identifier_number(ud.name.c_str());

  std::string pre3 = ud.type.substr(0, 3);
  
  // decorate $<type> Block
  add_ints_to_binary({(3 << 16) | 71, struct_type_num, 2});
  
  if(pre3 == "mat" || pre3 == "vec" || ud.type == "float32"){
    if(pre3 == "mat"){
      unsigned int s = atoi(ud.type.substr(3).c_str());
      
      // member_decorate $<type> 0 ColMajor
      add_ints_to_binary({(4 << 16) | 72, struct_type_num, 0, 5}); // Assume only one member per descriptor
      
      // member_decorate $<type> 0 MatrixStride <4 * matrix width>
      add_ints_to_binary({(5 << 16) | 72, struct_type_num, 0, 7, 4 * s});
    }
    
    // member_decorate $<type> 0 Offset 0
    add_ints_to_binary({(5 << 16) | 72, struct_type_num, 0, 35, 0});
  } else {
    printf("Support for uniforms of type %s is not yet supported\n", ud.type.c_str());
  }

  // decorate <name> DescriptorSet <set>
  add_ints_to_binary({(4 << 16) | 71, name_num, 34, ud.set});
  
  // decorate <name> Binding <binding>
  add_ints_to_binary({(4 << 16) | 71, name_num, 33, ud.binding});
}
