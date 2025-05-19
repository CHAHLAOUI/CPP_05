/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achahlao <achahlao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 16:23:40 by achahlao          #+#    #+#             */
/*   Updated: 2025/05/17 17:56:55 by achahlao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Form.hpp"
#include "Bureaucrat.hpp"


Form::Form(std::string _name_Form, const int _sign_Grand, const int _execut_Grad)
: name_Form(_name_Form) ,is_Sign(false), sign_Grad(_sign_Grand), execut_Grad(_execut_Grad)
{
	if (_execut_Grad < 1 || _sign_Grand < 1)
		throw Form::GradeTooHighException();
	else if (_execut_Grad > 150 || _sign_Grand > 150)
		throw Form::GradeTooLowException();
    
}



Form::Form(const Form &other)
    : name_Form(other.get_name_Form()), 
      is_Sign(other.get_is_Sign()),  
      sign_Grad(other.get_sign_Grad()),  
      execut_Grad(other.get_execut_Grad())   
{

 
}




const std::string &Form::get_name_Form() const
{
    return (name_Form);
}

bool Form::get_is_Sign() const
{
    return (is_Sign);
}

int Form::get_sign_Grad() const
{
    return (sign_Grad);
}

int Form::get_execut_Grad() const
{
    return (execut_Grad);
}




void Form::beSigned(const Bureaucrat &_bureaucrat) {
    if (_bureaucrat.getGrade() <= this->sign_Grad) {
        this->is_Sign = true;
    } else {
        throw Form::GradeTooLowException();
    }
}



void	Bureaucrat::signForm(Form &ob) {
	if (ob.get_is_Sign() == false)
		ob.beSigned(*this);
	else {
		std::cout << "bureaucrat " << this->getName() << " before signed " << ob.get_name_Form() << std::endl;
		return ;
	}
	std::cout << "bureaucrat " << this->getName() << " signed " << ob.get_name_Form() << std::endl;
}


Form::~Form()
{ }
