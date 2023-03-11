cmake_minimum_required (VERSION 3.20)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

project (test_fmtlog)
add_compile_options(-g)

add_subdirectory(fmtlog)

set(THREADS_PREFER_PTHREAD_FLAG ON)
find_package(Threads REQUIRED)

add_executable(test test.cpp)
target_compile_features(test PRIVATE cxx_std_17)
target_link_libraries(test PRIVATE Threads::Threads fmt::fmt)
target_include_directories(test PRIVATE fmtlog)
set_property(TARGET test PROPERTY POSITION_INDEPDENDENT_CODE ON)

