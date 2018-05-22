HCONLIB_ROOT = ~/Documents/Code/C++/HConLib

LIBS = -l Wingine -l Winval -l X11 -l glslang -l OSDependent -l SPIRV -l OGLCompiler -l HLSL -l FlatAlg -l vulkan -l pthread -lspurv 

test: test.cpp ../libspurv.a
	g++ -std=c++11 $< -I .. -I $(HCONLIB_ROOT)/include -L $(HCONLIB_ROOT)/lib -L .. $(LIBS) -o test
simple: simple_test.cpp ../libspurv.a
	g++ -g $< -I .. -L .. -l spurv -o $@

clean:
	rm test simple
