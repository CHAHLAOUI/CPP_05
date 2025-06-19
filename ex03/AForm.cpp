#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm(std::string _name_Form, const int _sign_Grad, const int _execut_Grad)
    : name_Form(_name_Form), sign_Grad(_sign_Grad), execut_Grad(_execut_Grad), is_Sign(false)
{
    if (_sign_Grad < 1 || _execut_Grad < 1)
        throw AForm::GradeTooHighException();
    else if (_sign_Grad > 150 || _execut_Grad > 150)
        throw AForm::GradeTooLowException();
}

AForm::AForm(const AForm& other)
    : name_Form(other.name_Form), sign_Grad(other.sign_Grad),
      execut_Grad(other.execut_Grad), is_Sign(other.is_Sign) {}

AForm& AForm::operator=(const AForm& obj) {
    if (this != &obj) {
        this->is_Sign = obj.is_Sign;
        // this->_target = obj._target;
    }
    return *this;
}

AForm::~AForm() {}

const std::string& AForm::getName() const {
    return name_Form;
}

bool AForm::isSigned() const {
    return is_Sign;
}

int AForm::getGradeSign() const {
    return sign_Grad;
}

int AForm::getGradeExec() const {
    return execut_Grad;
}

// std::string AForm::getTarget() const {
//     return _target;
// }

void AForm::beSigned(const Bureaucrat& b) {
    if (b.getGrade() <= sign_Grad)
        is_Sign = true;
    else
        throw GradeTooLowException();
}

void AForm::checkExecute(const Bureaucrat& executor) const {
    if (!is_Sign)
        throw FormNotSignedException();
    if (executor.getGrade() > execut_Grad)
        throw GradeTooLowException();
}


std::ostream& operator<<(std::ostream& o, const AForm& obj)
{
    o << "Form Name: " << obj.getName() << "\n";
    o << "Sign Grade: " << obj.getGradeSign() << "\n";
    o << "Execution Grade: " << obj.getGradeExec() << "\n";
    o << "Is Signed: " << (obj.isSigned() ? "Yes" : "No") << "\n";
    return o;
}
