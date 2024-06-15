#ifndef SENIOR_DEVELOPER_HPP
#define SENIOR_DEVELOPER_HPP

#include "developer.hpp"

// Derived class for Senior Developer
class SeniorDeveloper : public Developer {
public:
    // Constructor to initialize name and alias of the senior developer
    SeniorDeveloper(const std::string& name, const std::string& alias);

    // Override the solve_problem method to provide a specific implementation for senior developers
    void solve_problem() override;
};

#endif // SENIOR_DEVELOPER_HPP
