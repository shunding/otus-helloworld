cmake_minimum_required(VERSION 3.2)

set(LIB_DIRECTORY lib)
set(INCLUDE_DIRECTORY include)
set(SOURCE_DIRECTORY src)

set(BUILD_NUMBER $ENV{TRAVIS_BUILD_NUMBER})

if(BUILD_NUMBER)
    project(helloworld VERSION 0.0.${BUILD_NUMBER})
else()
    project(helloworld VERSION 0.0.1)
endif()

find_package(Boost COMPONENTS unit_test_framework REQUIRED)

add_subdirectory(${LIB_DIRECTORY})
add_subdirectory(${INCLUDE_DIRECTORY})
add_subdirectory(${SOURCE_DIRECTORY})

set(CPACK_GENERATOR DEB)

set(CPACK_PACKAGE_VERSION_MAJOR "${PROJECT_VERSION_MAJOR}")
set(CPACK_PACKAGE_VERSION_MINOR "${PROJECT_VERSION_MINOR}")
set(CPACK_PACKAGE_VERSION_PATCH "${PROJECT_VERSION_PATCH}")

set(CPACK_PACKAGE_CONTACT alex.drozhak@me.com)

include(CPack)

enable_testing()

add_test(test_version_failed test_main_cli)

