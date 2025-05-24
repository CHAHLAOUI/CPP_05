// ShrubberyCreationForm.cpp
#include "ShrubberyCreationForm.hpp"
#include "AForm.hpp"
#include <fstream>
#include <iostream>

// Constructor
ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target)
    : AForm("ShrubberyCreationForm", 145, 137), target(target) {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other)
    : AForm(other), target(other.target) {}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& other) {
    if (this != &other)
        this->target = other.target;
    return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

// void ShrubberyCreationForm::execute(Bureaucrat const& executor) const {
//     if (!getIsSigned())
//         throw AForm::NotSignedException();
//     if (executor.getGrade() > getGradeToExecute())
//         throw AForm::GradeTooLowException();

//     std::ofstream outFile(target + "_shrubbery");
//     if (!outFile) {
//         std::cerr << "Error: couldn't create the file.\n";
//         return;
//     }

//     outFile <<
//         "      🌲\n"
//         "     🌲🌲\n"
//         "    🌲🌲🌲\n"
//         "   🌲🌲🌲🌲\n"
//         "      ||\n"
//         "      ||\n";

//     outFile.close();
//     std::cout << "Shrubbery created in file: " << target + "_shrubbery" << std::endl;
// }

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const {

	AForm::execute(executor);

	try {

		
	} catch (std::ios_base::failure& e) {
		std::cout << "failed to create file because " << e.what() << "\n";
	}	

}