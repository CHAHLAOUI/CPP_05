#include "ShrubberyCreationForm.hpp"
#include <iostream>
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm()
: AForm("ShrubberyCreationForm", 145, 137), target("def")
{}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target)
: AForm("ShrubberyCreationForm", 145, 137), target(target)
{}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& oB)
: AForm(oB), target(oB.target)
{}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& oB)
{
    if (this != &oB)
        target = oB.target;
    return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{}


std::string ShrubberyCreationForm::getTarget() const
{
    return (target);
}


void ShrubberyCreationForm::execute(Bureaucrat const& E) const
{
    checkExecute(E);

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



