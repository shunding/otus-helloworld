configure_file(version.h.in "${CMAKE_CURRENT_SOURCE_DIR}/version.h")
target_include_directories(helloworld PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
