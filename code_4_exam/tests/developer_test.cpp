#include "junior_developer.hpp"
#include "senior_developer.hpp"
#include <gtest/gtest.h>

class DeveloperTest : public ::testing::Test {
protected:
    JuniorDeveloper* junior;
    SeniorDeveloper* senior;

    void SetUp() override {
        junior = new JuniorDeveloper("Peter Parker", "Spiderman");
        senior = new SeniorDeveloper("Diana Prince", "Wonder Woman");
    }

    void TearDown() override {
        delete junior;
        delete senior;
    } 
};  

TEST_F(DeveloperTest, TestLogoLoading) {
    junior->load_logo_from_file("/workspaces/Gruppe-F-Programmentwurf-2.-Semester/code_4_exam/tests/logo.txt");
    EXPECT_FALSE(junior->get_logo().empty());
    EXPECT_THROW(junior->load_logo_from_file("invalid_file.txt"), std::runtime_error);
}

TEST_F(DeveloperTest, TestSolveProblem) {
    testing::internal::CaptureStdout();
    junior->solve_problem();
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_NE(output.find("Puh, that was tough"), std::string::npos);
    EXPECT_NE(output.find("Ahhhh, I needed that coffee!!!"), std::string::npos);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
