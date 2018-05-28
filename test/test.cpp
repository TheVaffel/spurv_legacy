#ifdef _WIN32
#define _CRT_SECURE_NO_DEPRECATE
#endif

#include <Winval.h>
#include <Wingine.h>
#include <iostream>

#include <spurv.h>

using namespace std;

static const float test_vertices[] =
  { -1.0f, -1.0f, 0.5f, 1.0f,
    1.0f, -1.0f, 0.5f, 1.0f,
    -1.0f, 1.0f, 0.5f, 1.0f,
    1.0f, 1.0f, 0.5f, 1.0f};

static const float test_colors[] =
  { 1.0f, 0.0f, 0.0f, 0.0f,
    0.0f, 1.0f, 0.0f, 1.0f,
    0.0f, 0.0f, 1.0f, 1.0f,
    1.0f, 1.0f, 1.0f, 1.0f};

static const uint32_t test_indices[] =
  { 0, 1, 3,
    0, 3, 2};

const char *vertShaderText =
  GLSL(
       layout (location = 0) in vec4 pos;
       layout (location = 1) in vec4 inColor;
       layout (location = 0) out vec4 outColor;
       out gl_PerVertex { 
	 vec4 gl_Position;
       };
       void main() {
	 outColor = inColor;
	 gl_Position = pos;
       }
       );

int main(){

  Winval win(1280, 720);
  Wingine wg(win);

  WgBuffer vertexBuffer = wg.createVertexBuffer(4*4*sizeof(float), test_vertices);

  WingineBuffer colorBuffer = wg.createVertexBuffer(4*4*sizeof(float), test_colors);

  WingineBuffer indexBuffer = wg.createIndexBuffer(3*2*sizeof(int32_t), test_indices);

  std::vector<uint32_t> spirv;
  spurv::parse_spurv_file("example_vert.spurv", spirv);
  WingineShader vertexShader = wg.createShader(spirv, VK_SHADER_STAGE_VERTEX_BIT);
#ifdef DEBUG
  printf("Done with vertex shader\n");
#endif
  spirv.clear();
  spurv::parse_spurv_file("example_frag.spurv", spirv);

  WingineShader fragmentShader = wg.createShader(spirv, VK_SHADER_STAGE_FRAGMENT_BIT);

  WinginePipeline colorPipeline = wg.createPipeline(0, NULL,
						    {vertexShader, fragmentShader},
						    {WG_ATTRIB_FORMAT_4, WG_ATTRIB_FORMAT_4}, true);
  WingineObjectGroup colorGroup(wg, colorPipeline);

  WingineRenderObject object1(6, {vertexBuffer, colorBuffer}, indexBuffer);


  clock_t start_time = clock();
  int count = 0;


  while(win.isOpen()){
    count++;
 
    colorGroup.startRecording();
    colorGroup.recordRendering(object1, {});
    colorGroup.endRecording();


    wg.present();
    
    clock_t current_time = clock();
    long long int diff = current_time - start_time;
    long long w = 1000/60 - 1000*diff/CLOCKS_PER_SEC;
    if(w > 0){
      win.sleepMilliseconds((int32_t)w);
    }
    start_time = current_time;
    win.flushEvents();
    if(win.isKeyPressed(WK_ESC)){
      break;
    }
  }

  wg.destroyShader(vertexShader);
  wg.destroyShader(fragmentShader);

  wg.destroyPipeline(colorPipeline);

  wg.destroyBuffer(vertexBuffer);
  wg.destroyBuffer(colorBuffer);
  wg.destroyBuffer(indexBuffer);

  spurv::clear_spurv();
  
  return 0;
}
