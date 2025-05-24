#include "Bureaucrat.hpp"
#include "Form.hpp"



int main() {
    Bureaucrat b1("Ahmed", 10);
    
    Bureaucrat b2("Youssef", 100);

    Form f1("Formulaire A", 50, 20);

    Form f2("Formulaire B", 5, 10);

    b1.signForm(f1); 

    b1.signForm(f2); 

    return (0);
}
