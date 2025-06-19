#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45), target("default") {}

RobotomyRequestForm::RobotomyRequestForm(const std::string& target)
    : AForm("RobotomyRequestForm", 72, 45), target(target) {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other)
    : AForm(other), target(other.target) {}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& other) {
    if (this != &other)
        target = other.target;
    return *this;
}

RobotomyRequestForm::~RobotomyRequestForm() {}

void RobotomyRequestForm::execute(const Bureaucrat& executor) const {
    checkExecute(executor);
    std::cout << "🔩 Bzzzzzzzz.... 🔊 Drilling noises..." << std::endl;
    std::srand(std::time(0));
    if (std::rand() % 2)
        std::cout << "✅ " << target << " has been robotomized successfully!" << std::endl;
    else
        std::cout << "❌ Robotomy failed for " << target << "." << std::endl;
}

