// RobotomyRequestForm.cpp

#include "RobotomyRequestForm.hpp"
#include "AForm.hpp"


// Constructor
RobotomyRequestForm::RobotomyRequestForm(const std::string& _target)
    : AForm("RobotomyRequestForm", 72, 45), target(_target) {
    std::srand(std::time(0));  // Seed rand()
}

// Destructor
RobotomyRequestForm::~RobotomyRequestForm() {}

// Copy constructor
RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other)
    : AForm(other), target(other.target) {}

// Assignment operator
RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& other) {
    if (this != &other) {
        AForm::operator=(other);
        this->target = other.target;
    }
    return *this;
}

// Execute function
void RobotomyRequestForm::execute(const Bureaucrat& executor) const {
    AForm::execute(executor);  // Check signature and executor grade

    std::cout << "* drilling noises *" << std::endl;

    if (rand() % 2 == 0) {
        std::cout << target << " has been robotomized successfully!" << std::endl;
    } else {
        std::cout << "Robotomy failed on " << target << "." << std::endl;
    }
}
