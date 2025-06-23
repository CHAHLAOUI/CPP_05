/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achahlao <achahlao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 17:26:31 by achahlao          #+#    #+#             */
/*   Updated: 2025/06/23 14:47:39 by achahlao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("Security") , note(150)
{}

Bureaucrat::Bureaucrat(std::string _name, int _note) : name(_name)
{
    if (_note < 1)
        throw GradeTooHighException();
    else if (_note > 150)
        throw GradeTooLowException();
    note = _note;
}


Bureaucrat::Bureaucrat(const Bureaucrat& obj) : name(obj.getName())
{
    std::cout << "contructor copy " << std::endl;
    note = obj.getGrade();
}
Bureaucrat& Bureaucrat::operator=(const Bureaucrat& obj)
{
    if(this != &obj)
    {
        std::cout << "contructor de = " << std::endl;
        note = obj.getGrade();

    }
    return (*this);
}




void Bureaucrat::incrementGrade() {
    if (note <= 1)
        throw GradeTooHighException();
    note--;
}

void Bureaucrat::decrementGrade() {
    if (note >= 150)
        throw GradeTooLowException();
    note++;
}

//                         //  ^
// // hna k dir - eqivalnt |
// void	Bureaucrat::incrementGrade() {

// 	if (note > 1 && note <= 150)
// 		note--;
// 	else
// 		throw GradeTooHighException();
// }

//                         //  |
// // hna khask dir + eqivalnt V
// void	Bureaucrat::decrementGrade() {
// 	if (note >= 1 && note < 150)
// 		note++;
// 	else
// 		throw GradeTooLowException();
// }




Bureaucrat::~Bureaucrat() {
}


const std::string Bureaucrat::getName() const {
    return (name);
}

int Bureaucrat::getGrade() const {
    return (note);
}


std::ostream&	operator<<(std::ostream& o, const Bureaucrat & obj)
 {
	o << obj.getName() << ", bureaucrat grade " << obj.getGrade() << std::endl;
	return o;
}