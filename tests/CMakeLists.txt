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


find_package(DCMTK)
if (${DCMTK_FOUND})
    message(STATUS "DCMTK found. Interoperability tests enabled")
else (${DCMTK_FOUND})
    add_definitions(-DDISABLE_DCMTK_INTEROPERABILITY_TEST)
    message(WARNING "WARNING: DCMTK not found. Disabling interoperability tests")
endif (${DCMTK_FOUND})


# Now simply link against gtest or gtest_main as needed. Eg
add_executable(
        cppx.unittest
        ${cppx_tests_include}
        ${cppx_tests_src}
        Unity_TagTest.cpp Unity_StringTest.cpp Unity_FileReaderTest.cpp)

target_include_directories(cppx.unittest  PRIVATE ${PROJECT_SOURCE_DIR}/src  ${DCMTK_INCLUDE_DIRS} )
target_link_libraries(
        cppx.unittest
        gtest_main
        Dicom.Native-linux64

        dcmdata dcmimage
)

add_test(
        NAME
        cppx.unittest
        COMMAND
        ${CMAKE_BINARY_DIR}/${CMAKE_INSTALL_BINDIR}/cppx.unittest
)



file(GLOB DCM_ERROR  "${PROJECT_SOURCE_DIR}/tests/dcmfiles/error/*.dcm")
file(GLOB DCM_GE "${PROJECT_SOURCE_DIR}/tests/dcmfiles/GE/*.dcm")
file(GLOB DCM_OP  "${PROJECT_SOURCE_DIR}/tests/dcmfiles/other-pass/*.dcm")
file(GLOB DCM_V1  "${PROJECT_SOURCE_DIR}/tests/dcmfiles/v1.2.1-pass1/*.dcm")
file(GLOB DCM_V11  "${PROJECT_SOURCE_DIR}/tests/dcmfiles/v1.2.1-pass2/*.dcm")
file(GLOB DCM_V2  "${PROJECT_SOURCE_DIR}/tests/dcmfiles/vr1.2-pass/*.dcm")
file(GLOB DCM_V22  "${PROJECT_SOURCE_DIR}/tests/dcmfiles/vr1.2-pass2/*.dcm")


message(STAUTS " ${DCM_ERROR}")
message(STAUTS " ${DCM_GE}")
message(STAUTS " ${DCM_OP}")
message(STAUTS " ${DCM_V1}")
message(STAUTS " ${DCM_V11}")
message(STAUTS " ${DCM_V2}")
message(STAUTS " ${DCM_V22}")

file(COPY ${DCM_ERROR} DESTINATION  "${CMAKE_BINARY_DIR}/tests/dcmfiles/error/")
file(COPY ${DCM_GE} DESTINATION  "${CMAKE_BINARY_DIR}/tests/dcmfiles/GE/")
file(COPY ${DCM_OP} DESTINATION  "${CMAKE_BINARY_DIR}/tests/dcmfiles/other-pass/")
file(COPY ${DCM_V1} DESTINATION  "${CMAKE_BINARY_DIR}/tests/dcmfiles/v1.2.1-pass1/")
file(COPY ${DCM_V11} DESTINATION  "${CMAKE_BINARY_DIR}/tests/dcmfiles/v1.2.1-pass2/")
file(COPY ${DCM_V2} DESTINATION  "${CMAKE_BINARY_DIR}/tests/dcmfiles/vr1.2-pass/")
file(COPY ${DCM_V22} DESTINATION  "${CMAKE_BINARY_DIR}/tests/dcmfiles/vr1.2-pass2/")