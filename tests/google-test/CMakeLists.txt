# Google's reference: https://github.com/google/googletest/blob/master/googletest/README.md
# CLion reference: https://www.jetbrains.com/help/clion/creating-google-test-run-debug-configuration-for-test.html

# 'Google_test' is the subproject name
project(Google_tests)

# List of active test files
set(TEST_FILES libs/example1/example1.cpp)
# List libraries to be included to test
set(LIBS_TO_BE_TESTED example1)

# 'lib' is the folder with Google Test sources
add_subdirectory(google-tests-lib)
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

# Prevent overriding the parent project's compiler/linker
# settings on Windows
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)

# 'Google_Tests_run' is the target name
# 'test1.cpp tests2.cpp' are source files with tests
add_executable(Google_Tests_run ${TEST_FILES})
target_link_libraries(Google_Tests_run gtest gtest_main)
target_link_libraries(Google_Tests_run ${LIBS_TO_BE_TESTED})
