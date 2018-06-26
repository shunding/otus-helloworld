add_executable(helloworld_cli main.cpp)
target_link_libraries(helloworld_cli LINK_PUBLIC helloworld)
set_target_properties(helloworld_cli PROPERTIES
    CXX_STANDARD 14
    CXX_STANDARD_REQUIRED ON
    COMPILE_OPTIONS -Wpedantic -Wall -Wextra
)

install(TARGETS helloworld_cli RUNTIME DESTINATION bin)
