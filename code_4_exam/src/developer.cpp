#include "developer.hpp"

// Constructor for the Developer class. Initializes the name and alias of the developer.
Developer::Developer(const std::string& name, const std::string& alias) : name(name), alias(alias) {}

// Prints a message indicating that the developer needs coffee.
void Developer::drink_coffee() {
    std::cout << "Ahhhh, I needed that coffee!!!" << std::endl;
}

// Loads the developer's logo from a file specified by the file path.
// Throws a runtime_error if the file cannot be opened.
void Developer::load_logo_from_file(const std::string& filepath) {
    std::ifstream file(filepath);
    if (!file.is_open()) {
        throw std::runtime_error("Invalid file path");
    }
    std::getline(file, logo, '\0');
}

// Returns the name of the developer.
std::string Developer::get_name() const { return name; }

// Returns the alias of the developer.
std::string Developer::get_alias() const { return alias; }

// Returns the logo of the developer.
std::string Developer::get_logo() const { return logo; }

// Stream insertion operator for the Developer class.
// Outputs the developer's name, alias, and logo (if loaded) to the output stream.
std::ostream& operator<<(std::ostream& os, const Developer& dev) {
    os << "Name: " << dev.name << "\nAlias: " << dev.alias;
    if (!dev.logo.empty()) {
        os << "\n" << dev.logo;
    }
    return os;
}
