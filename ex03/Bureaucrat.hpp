#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <exception>
#include <string>

#include "AForm.hpp"

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

		// incr o decrrement G
		void  incrementGrade();
		void  decrementGrade();

		// exeption de High o Low
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

		// getter de name o note
		const std::string	getName() const;
		int					getGrade() const;

		// fonction pour sign un forme 
		void signForm(AForm &form);

        void executeForm(AForm const &form);

};


std::ostream&	operator<<(std::ostream& o, const Bureaucrat & obj) ;

#endif