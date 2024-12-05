
#project(PicoLinuxC LANGUAGE CXX)

# You must initialise the sdk yourself. It is expected that this cmake file is included as a sub_directory or similar.

set(LIB_NAME dooc_picolinuxc)
add_library(${LIB_NAME} STATIC src/picolinuxc.cpp)
add_library(dooc::picolinuxc ALIAS ${LIB_NAME})

target_link_libraries(${LIB_NAME} PUBLIC pico_stdlib)
