#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <exception>
#include <string>

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
		int getGrade() const;

};


std::ostream& operator<<(std::ostream& os, const Bureaucrat& rhs);

#endif