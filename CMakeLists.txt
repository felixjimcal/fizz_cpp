cmake_minimum_required(VERSION 3.5)

project(fizz_cpp LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/609281088cfefc76f9d0ce82e1ff6c30cc3591e5.zip
)

# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

add_executable(fizz_cpp main.cpp Printer.cpp)

enable_testing()

add_executable(
  fizz_test
  fizz_test.cc
)

target_link_libraries(
  fizz_test
  gtest_main
)

install(TARGETS fizz_cpp
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})

include(GoogleTest)
gtest_discover_tests(fizz_test)
