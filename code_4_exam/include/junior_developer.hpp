#ifndef JUNIOR_DEVELOPER_HPP
#define JUNIOR_DEVELOPER_HPP

#include "developer.hpp"

// Derived class for Junior Developer
class JuniorDeveloper : public Developer {
public:
    // Constructor to initialize name and alias of the junior developer
    JuniorDeveloper(const std::string& name, const std::string& alias);

    // Override the solve_problem method to provide a specific implementation for junior developers
    void solve_problem() override;
}; 

#endif // JUNIOR_DEVELOPER_HPP
