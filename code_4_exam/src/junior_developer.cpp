#include "junior_developer.hpp"

// Constructor for the JuniorDeveloper class. Initializes the name and alias of the junior developer
// by calling the base class (Developer) constructor.
JuniorDeveloper::JuniorDeveloper(const std::string& name, const std::string& alias)
    : Developer(name, alias) {}

// Implementation of the solve_problem method for JuniorDeveloper.
// Outputs a message indicating that a problem is being solved and that it was tough.
// Calls the drink_coffee method afterward.
void JuniorDeveloper::solve_problem() {
    std::cout << "Solving a problem:\n" << *this << "\nPuh, that was tough\n";
    drink_coffee();
}
