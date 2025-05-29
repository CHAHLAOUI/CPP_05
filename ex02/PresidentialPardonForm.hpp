// PresidentialPardonForm.hpp

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"
#include <string>

class PresidentialPardonForm : public AForm {
private:
    std::string target;

public:
    // Constructor
    PresidentialPardonForm(const std::string& _target);

    // Destructor
    ~PresidentialPardonForm();

    // Copy constructor
    PresidentialPardonForm(const PresidentialPardonForm& other);

    // Assignment operator
    PresidentialPardonForm& operator=(const PresidentialPardonForm& other);

    // Overridden execute function
    void execute(const Bureaucrat& executor) const;
};

#endif
