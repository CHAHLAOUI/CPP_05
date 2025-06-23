#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45), target("defl")
{}

RobotomyRequestForm::RobotomyRequestForm(const std::string& target)
: AForm("RobotomyRequestForm", 72, 45), target(target)
{}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& oB)
: AForm(oB), target(oB.target)
{}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& oB)
{
    if (this != &oB)
        target = oB.target;
    return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm() {}



std::string RobotomyRequestForm::getTarget() const
{
    return (target);
}

void RobotomyRequestForm::execute(const Bureaucrat& E) const
{
    checkExecute(E);
    if (std::rand() % 2)
        std::cout  << getTarget() << " has been robotomized successfully!" << std::endl;
    else
        std::cout << "Robotomy failed for " << target << "." << std::endl;
}

