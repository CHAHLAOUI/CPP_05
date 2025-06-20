/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achahlao <achahlao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 16:23:40 by achahlao          #+#    #+#             */
/*   Updated: 2025/06/20 21:25:19 by achahlao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

// Constructor

Form::Form(const std::string& name, int signGrade, int exec_Grade)
    : name_Form(name)
    , sign_Grad(signGrade)
    , execut_Grad(exec_Grade)
    , is_Sign(false)
{
    if (signGrade < 1 || exec_Grade < 1)
        throw GradeTooHighException();
    if (signGrade > 150 || exec_Grade > 150)
        throw GradeTooLowException();
}

// Copy
Form::Form(const Form& F)
    : name_Form(F.name_Form)
    , sign_Grad(F.sign_Grad)
    , execut_Grad(F.execut_Grad)
    , is_Sign(F.is_Sign)
{}


Form& Form::operator=(const Form& F)
{
    if (this != &F)
        this->is_Sign = F.is_Sign;
    return (*this);
}


Form::~Form() {}

// -----------------------Getters --------------------------//

const std::string& Form::getName()      const        { return name_Form; }
bool               Form::isSigned()     const      { return is_Sign; }
int                Form::getSignGrade() const  { return sign_Grad; }
int                Form::getExecGrade() const  { return execut_Grad; }


void Form::beSigned(const Bureaucrat& b)
{
    if (b.getGrade() > sign_Grad)
        throw GradeTooLowException();
    is_Sign = true;
}


std::ostream& operator<<(std::ostream& os, const Form& Form)
{
    os << "Form \"" << Form.getName() << "\", signed: "
       << Form.isSigned()
       << ", sign grade: "  << Form.getSignGrade()
       << ", exec grade: "  << Form.getExecGrade();
    return os;
}



// #include "Form.hpp"
// #include "Bureaucrat.hpp"


// Form::Form(std::string _name_Form, const int _sign_Grand, const int _execut_Grad)
// : name_Form(_name_Form) ,is_Sign(false), sign_Grad(_sign_Grand), execut_Grad(_execut_Grad)
// {
// 	if (_execut_Grad < 1 || _sign_Grand < 1)
// 		throw Form::GradeTooHighException();
// 	else if (_execut_Grad > 150 || _sign_Grand > 150)
// 		throw Form::GradeTooLowException();
    
// }



// Form::Form(std::string _name, int _sign_Grad, int _exec_Grad)
//     : name_Form(_name), sign_Grad(_sign_Grad), execut_Grad(_exec_Grad), is_Sign(false)
// {}





// const std::string &Form::get_name_Form() const
// {
//     return (name_Form);
// }

// bool Form::get_is_Sign() const
// {
//     return (is_Sign);
// }

// int Form::get_sign_Grad() const
// {
//     return (sign_Grad);
// }

// int Form::get_execut_Grad() const
// {
//     return (execut_Grad);
// }




// void Form::beSigned(const Bureaucrat &_bureaucrat) {
//     if (_bureaucrat.getGrade() <= this->sign_Grad) {
//         this->is_Sign = true;
//     } else {
//         throw Form::GradeTooLowException();
//     }
// }



// void	Bureaucrat::signForm(Form &ob) {
// 	if (ob.get_is_Sign() == false)
// 		ob.beSigned(*this);
// 	else {
// 		std::cout << "bureaucrat " << this->getName() << " before signed " << ob.get_name_Form() << std::endl;
// 		return ;
// 	}
// 	std::cout << "bureaucrat " << this->getName() << " signed " << ob.get_name_Form() << std::endl;
// }


// Form::~Form()
// { }
