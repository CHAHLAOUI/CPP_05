#include "Bureaucrat.hpp"
#include "Form.hpp"



int main() {
    Bureaucrat b1("Ahmed", 10);
    Bureaucrat b2("Youssef", 100);

    Form f1("Formulaire A", 50, 20);
    Form f2("Formulaire B", 5, 10);

    b1.signForm(f1);  // Ahmed عندو رتبة 10 < 50 ➜ يقدر يوقع
    b2.signForm(f1);  // Youssef عندو رتبة 100 > 50 ➜ ما يقدرش

    b1.signForm(f2);  // Ahmed عندو رتبة 10 > 5 ➜ ما يقدرش يوقع

    return 0;
}
