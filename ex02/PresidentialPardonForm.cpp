#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", 25, 5), target("def")
{}

PresidentialPardonForm::PresidentialPardonForm(const std::string& target_)
: AForm("PresidentialPardonForm", 25, 5), target(target_)
{}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& oB)
: AForm(oB), target(oB.target)
{}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& oB)
{
    if (this != &oB)
        target = oB.target;
    return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm()
{}

std::string PresidentialPardonForm::getTarget() const
{
    return (target);
}

void PresidentialPardonForm::execute(const Bureaucrat& E) const
{
    checkExecute(E);
    std::cout << getTarget() << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}



