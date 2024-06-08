set(TEST_SOURCES developer_test.cpp)

add_executable(runTests ${TEST_SOURCES})
target_link_libraries(runTests developer_lib gtest gtest_main)
add_test(NAME runTests COMMAND runTests)
