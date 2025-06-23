#include "Intern.hpp"
#include "Bureaucrat.hpp"  
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"











int main()
{
    Intern someRandomIntern;
    AForm* rrf;
    // Bureaucrat a("chahlaoui", 23);
        Bureaucrat boss("boss", 1);

    rrf = someRandomIntern.makeForm("shrubbery_creation", "Bender");
     rrf->beSigned(boss);
     rrf->checkExecute(boss);
    rrf->execute(boss);
    if (rrf)
    {
        std::cout << *rrf << std::endl; 
        delete rrf;
    }

    return 0;
}

// int main() {
//     Intern intern;

//     AForm* form1 = intern.makeForm("shrubbery_creation", "Home");
//     AForm* form2 = intern.makeForm("robotomy_request", "Bender");
//     AForm* form3 = intern.makeForm("presidential_pardon", "Alice");
//     AForm* form4 = intern.makeForm("unknown_form", "TargetX");

//     // Delete allocated forms to avoid memory leak
//     if (form1) delete form1;
//     if (form2) delete form2;
//     if (form3) delete form3;
//     if (form4) delete form4; // NULL, pas de delete nécessaire mais safe

//     return 0;
// }
