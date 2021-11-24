


file(GLOB cppx_implementation_src "${CMAKE_CURRENT_SOURCE_DIR}/*.cpp")
file(GLOB cppx_implementation_include "${CMAKE_CURRENT_SOURCE_DIR}/*.h")

add_library(cppx  SHARED
          ${cppx_implementation_include}
          ${cppx_implementation_src}
)
# respective macro definitions
message("CMAKE_BUILD_TYPE = ${CMAKE_BUILD_TYPE}")
if (CMAKE_BUILD_TYPE MATCHES Debug)
    target_compile_definitions(cppx PUBLIC _DEBUG)
elseif (CMAKE_BUILD_TYPE MATCHES Release)
    target_compile_definitions(cppx PUBLIC N_DEBUG)
endif ()