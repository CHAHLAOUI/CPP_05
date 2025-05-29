#include "ShrubberyCreationForm.hpp"
#include <iostream>
#include <fstream>

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

void ShrubberyCreationForm::execute(Bureaucrat const& executor) const
{
    checkExecute(executor);  // تتأكد واش الفورم signed والبيروقراط عندو grade كافي

    std::ofstream file(target + "_shrubbery");
    if (!file)
    {
        std::cerr << "Error: Cannot create file!" << std::endl;
        return;
    }

    file << "     ccee88oo\n"
         << "  C8O8O8Q8PoOb o8oo\n"
         << " dOB69QO8PdUOpugoO9bD\n"
         << "CgggbU8OU qOp qOdoUOdcb\n"
         << "    6OuU  /p u gcoUodpP\n"
         << "      \\\\//  /douUP\n"
         << "        \\\\////\n"
         << "         |||/\\\n"
         << "         |||\\/\n"
         << "         |||||\n"
         << "   .....//||||\\....\n";

    file.close();
    std::cout << "Shrubbery created in " << target + "_shrubbery" << std::endl;
}


