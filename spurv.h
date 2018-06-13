#include <vector>
#include <stdint.h>

// #define DEBUG

namespace spurv{

  void parse_spurv_file(const char* name, std::vector<uint32_t>& spirv);
  
  void clear_spurv();
};
