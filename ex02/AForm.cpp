#include "AForm.hpp"
#include "Bureaucrat.hpp"


AForm::AForm(std::string _name_Form, const int _sign_Grand, const int _execut_Grad)
: name_Form(_name_Form) ,is_Sign(false), sign_Grad(_sign_Grand), execut_Grad(_execut_Grad)
{
	if (_execut_Grad < 1 || _sign_Grand < 1)
		throw AForm::GradeTooHighException();
	else if (_execut_Grad > 150 || _sign_Grand > 150)
		throw AForm::GradeTooLowException();
    
}



AForm::AForm(const AForm &other)
    : name_Form(other.get_name_Form()), 
      is_Sign(other.get_is_Sign()),  
      sign_Grad(other.get_sign_Grad()),  
      execut_Grad(other.get_execut_Grad())   
{

 
}




const std::string &AForm::get_name_Form() const
{
    return (name_Form);
}

bool AForm::get_is_Sign() const
{
    return (is_Sign);
}

int AForm::get_sign_Grad() const
{
    return (sign_Grad);
}

int AForm::get_execut_Grad() const
{
    return (execut_Grad);
}




void AForm::beSigned(const Bureaucrat &_bureaucrat) {
    if (_bureaucrat.getGrade() <= this->sign_Grad) {
        this->is_Sign = true;
    } else {
        throw AForm::GradeTooLowException();
    }
}



// void	AForm::signForm(AForm &ob) {
// 	if (ob.get_is_Sign() == false)
// 		ob.beSigned(*this);
// 	else {
// 		std::cout << "bureaucrat " << this->getName() << " before signed " << ob.get_name_Form() << std::endl;
// 		return ;
// 	}
// 	std::cout << "bureaucrat " << this->getName() << " signed " << ob.get_name_Form() << std::endl;
// }

void AForm::checkExecute(Bureaucrat const& executor) const
{
    if (!this->get_is_Sign())
        throw AForm::FormNotSignedException();
    if (executor.getGrade() > this->get_execut_Grad())
        throw AForm::GradeTooLowException();
}

AForm::~AForm()
{ }
