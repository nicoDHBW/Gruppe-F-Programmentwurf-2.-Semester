#include "junior_developer.hpp"
#include "senior_developer.hpp"
#include <memory>
#include <vector>

int main() {
    std::vector<std::shared_ptr<Developer>> developers;

    auto junior = std::make_shared<JuniorDeveloper>("Peter Parker", "Spiderman");
    auto senior = std::make_shared<SeniorDeveloper>("Diana Prince", "Wonder Woman");

    junior->load_logo_from_file( "../code_4_exam/assets/spiderman.txt");
    senior->load_logo_from_file( "../code_4_exam/assets/wonder_woman.txt");

    developers.push_back(junior);
    developers.push_back(senior);

    for (const auto& dev : developers) {
        dev->solve_problem();
    }

    return 0;
}
