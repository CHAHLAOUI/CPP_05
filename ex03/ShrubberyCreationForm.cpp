#include "ShrubberyCreationForm.hpp"
#include <iostream>
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm()
    : AForm("ShrubberyCreationForm", 145, 137), target("default") {}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target)
    : AForm("ShrubberyCreationForm", 145, 137), target(target) {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other)
    : AForm(other), target(other.target) {}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& other)
{
    if (this != &other)
        target = other.target;
    return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}


// std::string ShrubberyCreationForm::getTarget() const
// {
//     return (target);
// }


void ShrubberyCreationForm::execute(Bureaucrat const& executor) const
{
    checkExecute(executor);

    std::ofstream file((target + "_shrubbery").c_str());
    if (!file)
    {
        std::cout << "Error: Cannot create file!" << std::endl;
        return;
    }

file << "        *\n"
     << "       ***\n"
     << "      *****\n"
     << "     *******\n"
     << "    *********\n"
     << "   ***********\n"
     << "  *************\n"
     << " ***************\n"
     << "       |||\n"
     << "       |||\n"
     << "     __|||__\n"
     << "    |_______|\n"
     << "      |   |    \n"
     << "      ^   ^    \n";



    file.close();
    std::cout << "Shrubbery created in " << target + "_shrubbery" << std::endl;
}


