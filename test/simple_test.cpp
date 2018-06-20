#include <vector>
#include <spurv.h>

int main(){
  std::vector<uint32_t> spirv_frag;
  spurv::parse_spurv_file("example_frag.spurv", spirv_frag);

  std::vector<uint32_t> spirv_vert;
  spurv::parse_spurv_file("vertex_uniform.spurv", spirv_vert);
  spurv::clear_spurv();
}
