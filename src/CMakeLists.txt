project(FSE_2023_G4 LANGUAGE CXX)
set(SOURCE_EXE main.cpp)


add_library(converter STATIC converter.cpp converter.hpp)  
add_executable(main ${SOURCE_EXE})

target_link_libraries (main converter)

