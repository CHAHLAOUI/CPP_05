

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
        Bureaucrat bob("Bob", 40);  // grade 40
        RobotomyRequestForm robotForm("Alice");

        std::cout << robotForm << std::endl;
        robotForm.beSigned(bob);    // Bob signs the form (grade 40 < 72 needed to sign)
        robotForm.execute(bob);     // Bob executes (grade 40 < 45 needed to execute) -> should fail

        Bureaucrat alice("Alice", 30);  // grade 30
        alice.executeForm(robotForm);   // Alice executes robotomy form (grade 30 < 45 needed, still fail)

        Bureaucrat exec("Exec", 0);  // grade 20
        robotForm.execute(exec);       // exec can execute now (20 < 45)

        PresidentialPardonForm pardonForm("Charlie");
        std::cout << pardonForm << std::endl;

        pardonForm.beSigned(exec);   // exec signs (grade 20 < 25 needed)
        pardonForm.execute(exec);    // exec executes (grade 20 > 5 needed, ok)

    }
    catch (std::exception& e)
    {
        // std::cout << "nariiii "<< e  << std::endl;
        
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }
    return 0;
}
