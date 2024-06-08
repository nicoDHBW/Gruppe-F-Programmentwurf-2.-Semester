#include "senior_developer.hpp"

SeniorDeveloper::SeniorDeveloper(const std::string& name, const std::string& alias)
    : Developer(name, alias) {}

void SeniorDeveloper::solve_problem() {
    std::cout << "Solving a problem:\n" << *this << "\nHa, that was EZ!\n";
    drink_coffee();
}
