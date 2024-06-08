#include "junior_developer.hpp"

JuniorDeveloper::JuniorDeveloper(const std::string& name, const std::string& alias)
    : Developer(name, alias) {}

void JuniorDeveloper::solve_problem() {
    std::cout << "Solving a problem:\n" << *this << "\nPuh, that was tough\n";
    drink_coffee();
}
