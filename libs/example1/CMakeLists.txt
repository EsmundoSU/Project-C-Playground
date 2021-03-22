project(example1 C)

# List source files of this library
set(SOURCE_FILES source/example1.c)

# Create target library
add_library(${PROJECT_NAME} ${SOURCE_FILES})
# Add include paths
target_include_directories(${PROJECT_NAME} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})