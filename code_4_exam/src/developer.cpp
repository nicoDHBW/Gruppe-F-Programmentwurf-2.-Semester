#include "developer.hpp"

Developer::Developer(const std::string& name, const std::string& alias) : name(name), alias(alias) {}

void Developer::drink_coffee() {
    std::cout << "Ahhhh, I needed that coffee!!!" << std::endl;
}

void Developer::load_logo_from_file(const std::string& filepath) {
    std::ifstream file(filepath);
    if (!file.is_open()) {
        throw std::runtime_error("Invalid file path");
    }
    std::getline(file, logo, '\0');
}

std::string Developer::get_name() const { return name; }
std::string Developer::get_alias() const { return alias; }
std::string Developer::get_logo() const { return logo; }

std::ostream& operator<<(std::ostream& os, const Developer& dev) {
    os << "Name: " << dev.name << "\nAlias: " << dev.alias;
    if (!dev.logo.empty()) {
        os << "\n" << dev.logo;
    }
    return os;
}
