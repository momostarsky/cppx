# copy from https://github.com/google/googletest/tree/master/googletest
# Download and unpack googletest at configure time
configure_file(CMakeLists.txt.in googletest-download/CMakeLists.txt)
execute_process(COMMAND ${CMAKE_COMMAND} -G "${CMAKE_GENERATOR}" .
        RESULT_VARIABLE result
        WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}/googletest-download )
if(result)
    message(FATAL_ERROR "CMake step for googletest failed: ${result}")
endif()
execute_process(COMMAND ${CMAKE_COMMAND} --build .
        RESULT_VARIABLE result
        WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}/googletest-download )
if(result)
    message(FATAL_ERROR "Build step for googletest failed: ${result}")
endif()

# Prevent overriding the parent project's compiler/linker
# settings on Windows
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)

# Add googletest directly to our build. This defines
# the gtest and gtest_main targets.
add_subdirectory(${CMAKE_CURRENT_BINARY_DIR}/googletest-src
        ${CMAKE_CURRENT_BINARY_DIR}/googletest-build
        EXCLUDE_FROM_ALL)



file(GLOB cppx_tests_include "${PROJECT_SOURCE_DIR}/tests/*.h")
file(GLOB cppx_tests_src "${PROJECT_SOURCE_DIR}/tests/*.cpp")


# The gtest/gtest_main targets carry header search path
# dependencies automatically when using CMake 2.8.11 or
# later. Otherwise we have to add them here ourselves.

message(STATUS  "${PROJECT_SOURCE_DIR}/src")

# Now simply link against gtest or gtest_main as needed. Eg
add_executable(
        cppx.unittest
        ${cppx_tests_include}
        ${cppx_tests_src}
        Unity_TagTest.cpp Unity_StringTest.cpp)

target_include_directories(cppx.unittest  PRIVATE ${PROJECT_SOURCE_DIR}/src )
target_link_libraries(
        cppx.unittest
        gtest_main
        Dicom.Native-linux64
)

add_test(
        NAME
        cppx.unittest
        COMMAND
        ${CMAKE_BINARY_DIR}/${CMAKE_INSTALL_BINDIR}/cppx.unittest
)