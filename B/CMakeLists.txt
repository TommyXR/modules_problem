project(B)

add_executable(B)

target_sources(B PUBLIC main.cpp PRIVATE inc/stdafx.h inc/file.h)

target_include_directories(B PUBLIC inc)
target_precompile_headers(B PUBLIC inc/stdafx.h)

target_link_libraries(B A)
