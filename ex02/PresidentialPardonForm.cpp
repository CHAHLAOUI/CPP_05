// PresidentialPardonForm.cpp

#include "PresidentialPardonForm.hpp"
#include <iostream>

// Constructor
PresidentialPardonForm::PresidentialPardonForm(const std::string& _target)
    : AForm("PresidentialPardonForm", 25, 5), target(_target) {}

// Destructor
PresidentialPardonForm::~PresidentialPardonForm() {}

// Copy constructor
PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& other)
    : AForm(other), target(other.target) {}

// Assignment operator
PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& other) {
    if (this != &other) {
        AForm::operator=(other);
        target = other.target;
    }
    return *this;
}

// Execute function
void PresidentialPardonForm::execute(const Bureaucrat& executor) const {
    AForm::execute(execu tor); // Check if the form is signed and the executor's grade

    std::cout << target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}
