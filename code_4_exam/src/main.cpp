#include "junior_developer.hpp"
#include "senior_developer.hpp"
#include <memory>
#include <vector>

int main() {
    // Create a vector to store shared pointers to Developer objects.
    std::vector<std::shared_ptr<Developer>> developers;

    // Create a shared pointer to a JuniorDeveloper object with name "Peter Parker" and alias "Spiderman".
    auto junior = std::make_shared<JuniorDeveloper>("Peter Parker", "Spiderman");

    // Create a shared pointer to a SeniorDeveloper object with name "Diana Prince" and alias "Wonder Woman".
    auto senior = std::make_shared<SeniorDeveloper>("Diana Prince", "Wonder Woman");

    // Load logos from files for the junior and senior developers.
    junior->load_logo_from_file("../code_4_exam/assets/spiderman.txt");
    senior->load_logo_from_file("../code_4_exam/assets/wonder_woman.txt");

    // Add the junior and senior developers to the vector.
    developers.push_back(junior);
    developers.push_back(senior);

    // Loop through the vector and call solve_problem on each developer.
    for (const auto& dev : developers) {
        dev->solve_problem();
    }

    return 0; // Return 0 to indicate successful execution.
}
