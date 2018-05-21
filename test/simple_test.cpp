#include <vector>
#include <spurv.h>

int main(){
  std::vector<uint32_t> spirv;
  spurv::parse_spurv_file("example.spurv", spirv);

  spirv.clear();
  spurv::parse_spurv_file("example.spurv", spirv);
  spurv::clear_spurv();
}
