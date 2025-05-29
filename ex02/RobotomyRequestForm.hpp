// RobotomyRequestForm.hpp

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP
#include <iostream>
#include "AForm.hpp"


class RobotomyRequestForm : public AForm {
private:
    std::string target;

public:
    // Constructor
    RobotomyRequestForm(const std::string& _target);

    // Destructor
    ~RobotomyRequestForm();

    // Copy constructor
    RobotomyRequestForm(const RobotomyRequestForm& other);

    // Assignment operator
    RobotomyRequestForm& operator=(const RobotomyRequestForm& other);

    // Overridden execute function
    void execute(const Bureaucrat& executor) const;
};

#endif
