#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;
class AForm
{
private:
    std::string     name_Form;
    const int       sign_Grad;
    const int       execut_Grad;
    bool            is_Sign;
public:

    AForm(std::string _name, const int _sign_Grand, const int _execut_Grad);
	

	const std::string &get_name_Form() const;
    bool get_is_Sign() const;
    int get_sign_Grad() const;
    int get_execut_Grad() const;

    
	
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
	
    
	
    void beSigned(const Bureaucrat &_bureaucrat);
    virtual void execute(Bureaucrat const & executor) const = 0;

		
    
    ~AForm();
};

#endif