#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <exception>
#include <string>

#include "Form.hpp"

class Form;
class Bureaucrat
{

	private:
		const std::string	name;
		int					note;
	
	public:
		Bureaucrat();
		Bureaucrat(std::string _name, int note);
		Bureaucrat(const Bureaucrat& obj);
		Bureaucrat& operator=(const Bureaucrat& obj);
		~Bureaucrat();

		void  incrementGrade();
		void  decrementGrade();
		class GradeTooHighException : public std::exception {
			public:
				const char* what() const throw() {
					return "Grade too high!";
				}
		};
	
		class GradeTooLowException : public std::exception {
			public:
				const char* what() const throw()
				{
					return "Grade too low!";
				}
		};
		const std::string getName() const;

		void signForm(Form &form);
		int getGrade() const;

};