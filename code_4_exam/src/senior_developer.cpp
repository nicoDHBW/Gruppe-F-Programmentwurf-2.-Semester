#include "senior_developer.hpp"

// Constructor for the SeniorDeveloper class. Initializes the name and alias of the senior developer
// by calling the base class (Developer) constructor.
SeniorDeveloper::SeniorDeveloper(const std::string& name, const std::string& alias)
    : Developer(name, alias) {}

// Implementation of the solve_problem method for SeniorDeveloper.
// Outputs a message indicating that a problem is being solved and that it was easy.
// Calls the drink_coffee method afterward.
void SeniorDeveloper::solve_problem() {
    std::cout << "Solving a problem:\n" << *this << "\nHa, that was EZ!\n";
    drink_coffee();
}
