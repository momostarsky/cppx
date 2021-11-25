


file(GLOB app_src "${CMAKE_CURRENT_SOURCE_DIR}/*.cpp")
file(GLOB app_include "${CMAKE_CURRENT_SOURCE_DIR}/*.h")

add_executable(demox
        ${app_src}
        ${app_include})
target_include_directories(demox PRIVATE ${PROJECT_SOURCE_DIR}/src)
target_link_libraries(demox  Dicom.Native-linux64)