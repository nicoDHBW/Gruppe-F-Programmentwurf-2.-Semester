#include "junior_developer.hpp"
#include "senior_developer.hpp"
#include <gtest/gtest.h>

// Test fixture for Developer tests
class DeveloperTest : public ::testing::Test {
protected:
    JuniorDeveloper* junior;  // Pointer to a JuniorDeveloper object
    SeniorDeveloper* senior;  // Pointer to a SeniorDeveloper object

    // Set up the test environment
    void SetUp() override {
        junior = new JuniorDeveloper("Peter Parker", "Spiderman");
        senior = new SeniorDeveloper("Diana Prince", "Wonder Woman");
    }

    // Tear down the test environment
    void TearDown() override {
        delete junior;
        delete senior;
    } 
};  

// Test case for loading logos
TEST_F(DeveloperTest, TestLogoLoading) {
    // Load logo from a valid file and check if it is loaded correctly
    junior->load_logo_from_file("/workspaces/Gruppe-F-Programmentwurf-2.-Semester/code_4_exam/tests/logo.txt");
    EXPECT_FALSE(junior->get_logo().empty());
    
    // Attempt to load logo from an invalid file and expect a runtime_error
    EXPECT_THROW(junior->load_logo_from_file("invalid_file.txt"), std::runtime_error);
}

// Test case for solving problems
TEST_F(DeveloperTest, TestSolveProblem) {
    // Capture standard output
    testing::internal::CaptureStdout();
    
    // Call solve_problem method
    junior->solve_problem();
    
    // Get the captured output
    std::string output = testing::internal::GetCapturedStdout();
    
    // Check if the output contains the expected strings
    EXPECT_NE(output.find("Puh, that was tough"), std::string::npos);
    EXPECT_NE(output.find("Ahhhh, I needed that coffee!!!"), std::string::npos);
}

// Main function to run all tests
int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
