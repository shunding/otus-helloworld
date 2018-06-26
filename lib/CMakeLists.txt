add_library(helloworld lib.cpp)
target_include_directories(helloworld PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
