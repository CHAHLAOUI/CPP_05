/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achahlao <achahlao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 16:23:49 by achahlao          #+#    #+#             */
/*   Updated: 2025/05/15 16:23:50 by achahlao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("Security") , note(150)
{}

Bureaucrat::Bureaucrat(std::string _name, int _note) : name(_name), note(_note)
{
    if (note < 1)
        throw GradeTooHighException();
    else if (note > 150)
        throw GradeTooLowException();
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




void	Bureaucrat::incrementGrade() {

	if (note > 1)
		note++;
	else
		throw GradeTooHighException();
}

void	Bureaucrat::decrementGrade() {
	if (note < 150)
		note--;
	else
		throw GradeTooLowException();
}




Bureaucrat::~Bureaucrat() {}


const std::string Bureaucrat::getName() const {
    return (name);
}

int Bureaucrat::getGrade() const {
    return (note);
}


std::ostream&	operator<<(std::ostream& o, const Bureaucrat & obj) {
	o << obj.getName() << ", bureaucrat grade " << obj.getGrade() << std::endl;
	return o;
}