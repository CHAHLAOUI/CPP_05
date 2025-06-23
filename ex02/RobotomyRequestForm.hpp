#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include <iostream>
#include "AForm.hpp"
#include <cstdlib>
// #include <ctime>

class RobotomyRequestForm : public AForm
{
    private:
        std::string target;

    public:
        RobotomyRequestForm();
        RobotomyRequestForm(const std::string& target);
        RobotomyRequestForm(const RobotomyRequestForm& oB);
        RobotomyRequestForm& operator=(const RobotomyRequestForm& oB);
        ~RobotomyRequestForm();

        std::string getTarget()         const;
        void execute(Bureaucrat const& E) const;
};

#endif
