#include "RobotomyRequestForm.hpp"
#include "AForm.hpp"
#include <cstdlib>  // for rand()
#include <ctime>    // for time()
#include <iostream>


RobotomyRequestForm::RobotomyRequestForm(const std::string& target)
    : AForm("RobotomyRequestForm", 72, 45), target(target) {
}


RobotomyRequestForm::~RobotomyRequestForm() {}


RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other)
    : AForm(other), target(other.target) {}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& other) {
    if (this != &other) {
        AForm::operator=(other);
        this->target = other.target;
    }
    return *this;
}

// execute function
void RobotomyRequestForm::execute(const Bureaucrat& executor) const {
    // Check if form is signed and executor has the right grade
    if (!this->getIsSigned())
        throw AForm::NotSignedException();
    if (executor.getGrade() > this->getGradeToExecute())
        throw AForm::GradeTooLowException();

    std::cout << "🔧 BZZZZZZZZZZZ... (drilling noise)" << std::endl;

    // Randomize robotomy result
    if (std::rand() % 2)
        std::cout << "🤖 " << this->target << " has been robotomized successfully!" << std::endl;
    else
        std::cout << "❌ Robotomy failed on " << this->target << "." << std::endl;
}
