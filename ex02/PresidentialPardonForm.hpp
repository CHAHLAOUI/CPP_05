#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"
#include <iostream>

class PresidentialPardonForm : public AForm
{
    private:
        std::string target;
    public:
        PresidentialPardonForm();
        PresidentialPardonForm(const std::string& target);
        PresidentialPardonForm(const PresidentialPardonForm& oB);
        PresidentialPardonForm& operator=(const PresidentialPardonForm& oB);
        ~PresidentialPardonForm();
        
        std::string getTarget()         const;
        void execute(Bureaucrat const& E) const;
};

#endif
