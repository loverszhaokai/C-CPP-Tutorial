cmake_minimum_required(VERSION 3.3)
project(macro)

include_directories(../third_party/googletest/googletest/include/)

add_definitions(-D__STDC_CONSTANT_MACROS
        -D__STDC_FORMAT_MACROS)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fno-exceptions \
    -fno-threadsafe-statics -std=c++11 -fvisibility-inlines-hidden \
    -std=gnu++11 -m64 -march=x86-64 -fvisibility=hidden -fPIC")

set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -O0 -g -D_DEBUG")

set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -O2 \
    -DDYNAMIC_ANNOTATIONS_ENABLED=0 -DNDEBUG -DNVALGRIND")

set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} ")

IF(CMAKE_BUILD_ASAN_TYPE MATCHES 1)
    set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} \
        -fsanitize=address -fno-omit-frame-pointer")
    set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} -lasan")
ENDIF(CMAKE_BUILD_ASAN_TYPE MATCHES 1)


add_executable(sizeof_macro_unittest sizeof_macro_unittest.cc)

target_link_libraries(sizeof_macro_unittest gtest_main)
