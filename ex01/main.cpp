#include "Bureaucrat.hpp"
#include "Form.hpp"



int main()
{
    Bureaucrat b1("Ahmed", 10);
    
    Bureaucrat b2("Youssef", 14);

    Form f1("Formulaire A", 50, 20);

    Form f2("Formulaire B", 15, 2);

    b1.signForm(f1); 
    // b2.signForm(f2);
    std::cout << f1;
    return (0);
}
