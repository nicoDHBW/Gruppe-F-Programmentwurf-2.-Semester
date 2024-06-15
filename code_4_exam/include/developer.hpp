#ifndef DEVELOPER_HPP
#define DEVELOPER_HPP

#include <string>
#include <iostream>
#include <stdexcept>
#include <fstream>

// Base class for Developer
class Developer {
protected:
    std::string name;  // Developer's name
    std::string alias; // Developer's alias
    std::string logo;  // Developer's logo

public:
    // Constructor to initialize name and alias
    Developer(const std::string& name, const std::string& alias);
    // Virtual destructor
    virtual ~Developer() = default;

    // Static method to simulate drinking coffee
    static void drink_coffee();

    // Method to load the developer's logo from a file
    void load_logo_from_file(const std::string& filepath);

    // Getter method for the developer's name
    std::string get_name() const;
    // Getter method for the developer's alias
    std::string get_alias() const;
    // Getter method for the developer's logo
    std::string get_logo() const;

    // Pure virtual method to solve a problem, to be implemented by derived classes
    virtual void solve_problem() = 0;

    // Friend function to overload the output stream operator for Developer objects
    friend std::ostream& operator<<(std::ostream& os, const Developer& dev);
};

#endif // DEVELOPER_HPP
