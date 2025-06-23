

#include "Bureaucrat.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

// int main() 
// {
//     Bureaucrat boss("boss", 1);
//     // AForm form("garden" , 23,30);
//     ShrubberyCreationForm form("chahlaoui");

//     boss.signForm(form);
//     boss.executeForm(form);
//     form.execute(boss);

//     return (0);
// }
#include <iostream>

int main()
{
    try
    {
        Bureaucrat bob("Bob", 40); 
        RobotomyRequestForm robotForm("Alice");

        
        robotForm.beSigned(bob);  
        robotForm.execute(bob);

        Bureaucrat alice("Alice", 30); 
        alice.executeForm(robotForm); 

         Bureaucrat exec("Exec", 5); 
         robotForm.execute(exec); 

        PresidentialPardonForm pardonForm("PresidentialPardon");
       std::cout << pardonForm << std::endl;

        pardonForm.beSigned(exec);  
         pardonForm.execute(exec);

    }
    catch (std::exception& e)
    {
        std::cout << "nariiii "<< e  << std::endl;
        
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }
    return 0;
}
