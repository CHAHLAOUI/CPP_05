#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern() {}

Intern::Intern(const Intern& other) { (void)other; }

Intern& Intern::operator=(const Intern& other) { (void)other; return *this; }

Intern::~Intern() {}


int get_Index(const std::string& name)
{
    const std::string  Names[] = {
        "shrubbery_creation",
        "robotomy_request",
        "presidential_pardon"
    };

    for (int i = 0; i < 3; ++i)
    {
        if (name == Names[i])
            return (i);
    }
    return (-1);
}



AForm* Intern::makeForm(const std::string& name, const std::string& target)
{
    switch (get_Index(name))
    {
        case (0):
            std::cout << "Intern creates " << name << std::endl;
            return (new ShrubberyCreationForm(target));
        case (1):
            std::cout << "Intern creates " << name << std::endl;
            return (new RobotomyRequestForm(target));
        case (2):
            std::cout << "Intern creates " << name << std::endl;
            return (new PresidentialPardonForm(target));
        default:
            std::cout << "Error: name '" << name << "' doesn't exist." << std::endl;
            return (NULL);
    }
}

