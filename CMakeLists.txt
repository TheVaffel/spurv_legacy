cmake_minimum_required(VERSION 3.0)

project(Spurv)

set(SPURV_ROOT ${CMAKE_HOME_DIRECTORY})
set(SRC_DIR ${SPURV_ROOT}/src)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${SPURV_ROOT}/lib)
set(INCLUDE_DIR ${SPURV_ROOT}/include)

set(YACC_FILE ${SRC_DIR}/spurv.y)
set(BISON_INPUT ${YACC_FILE})
set(BISON_OUTPUT ${SRC_DIR}/y.tab.cpp)
add_custom_command(OUTPUT ${BISON_OUTPUT}
                   COMMAND bison -d ${BISON_INPUT}
                                 -o ${BISON_OUTPUT})

set(LEX_FILE ${SRC_DIR}/spurv.l)
set(FLEX_INPUT ${LEX_FILE})
set(FLEX_OUTPUT ${SRC_DIR}/lex.yy.cpp)
add_custom_command(OUTPUT ${FLEX_OUTPUT}
                   COMMAND flex -o${FLEX_OUTPUT} ${FLEX_INPUT})

set(LEX_GENERATOR_SCRIPT lex_file_generator.py)
add_custom_command(OUTPUT ${LEX_FILE}
                   COMMAND python3 ${LEX_GENERATOR_SCRIPT} > ${LEX_FILE})

set(YACC_GENERATOR_SCRIPT yacc_file_generator.py)
add_custom_command(OUTPUT ${YACC_FILE}
                   COMMAND python3 ${YACC_GENERATOR_SCRIPT}
                     > ${YACC_FILE})

# Include our own version of unistd.h
if(WIN32)
  include_directories(${SPURV_ROOT}/windows)
endif()
include_directories(${SRC_DIR} ${INCLUDE_DIR})
add_library(spurv STATIC ${SRC_DIR}/spurv.cpp ${SRC_DIR}/y.tab.cpp ${SRC_DIR}/lex.yy.cpp
            ${SRC_DIR}/implicit_ids.cpp ${SRC_DIR}/uniforms.cpp)


# Test

set(TEST_EXEC demo)
set(SIMPLE_EXEC simple_demo)
set(TEST_DIR ${SPURV_ROOT}/test)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${TEST_DIR})
set(HCONLIB_ROOT ../../C++/HConLib)

if(WIN32)
  set(VULKAN_LIB_NAME vulkan-1)
  link_directories($ENV{VULKAN_SDK}/lib32)
  find_library( VULKAN_LIBS NAMES ${VULKAN_LIB_NAME} HINTS $ENV{VULKAN_SDK}/lib32)
  set(TEST_LIBS Winval Wingine FlatAlg ${VULKAN_LIB_NAME} spurv)
else()
  set(VULKAN_LIB_NAME vulkan)
  find_library(VULKAN_LIBS NAMES ${VULKAN_LIB_NAME})
  set(TEST_LIBS Winval Wingine X11 FlatAlg ${VULKAN_LIB_NAME} spurv)
endif()

include_directories(${HCONLIB_ROOT}/include)
link_directories(${HCONLIB_ROOT}/lib)

add_executable(${TEST_EXEC} ${TEST_DIR}/test.cpp)
target_link_libraries(${TEST_EXEC} ${TEST_LIBS})

add_executable(${SIMPLE_EXEC} ${TEST_DIR}/simple_test.cpp)
target_link_libraries(${SIMPLE_EXEC} ${TEST_LIBS})
