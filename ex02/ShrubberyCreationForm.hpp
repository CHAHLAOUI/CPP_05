
#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include <fstream>
#include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{
private:
    std::string target;

public:
    ShrubberyCreationForm();
    ShrubberyCreationForm(const std::string& target);
    ShrubberyCreationForm(const ShrubberyCreationForm& oB);
    ShrubberyCreationForm& operator=(const ShrubberyCreationForm& oB);
    ~ShrubberyCreationForm();
    

    std::string getTarget()         const;
    void execute(Bureaucrat const& E) const;

};

#endif
