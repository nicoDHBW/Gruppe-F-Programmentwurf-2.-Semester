set(TEST_SOURCES developer_test.cpp)

find_package(GTest REQUIRED)

add_executable(runTests ${TEST_SOURCES})
target_link_libraries(runTests developer_lib GTest::GTest GTest::Main)

add_test(NAME runTests COMMAND runTests)
gtest_discover_tests(runTests)
