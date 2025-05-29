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

    // Constructors and destructor DE Cclass AForm 
    AForm(std::string _name, const int _sign_Grand, const int _execut_Grad);
    AForm(const AForm &other);
    virtual ~AForm();

    // hna Getter 
	const std::string &get_name_Form() const;
    bool get_is_Sign() const;
    int get_sign_Grad() const;
    int get_execut_Grad() const;

    
	

    // Exceptions
    class GradeTooHighException : public std::exception
    {
        public:
        const char* what() const throw()
        {
            return ("Grade too high!");
        }
    };
	
    class GradeTooLowException : public std::exception
    {
        public:
        const char* what() const throw()
        {
            return "Grade too low!";
        }
    };

    class FormNotSignedException : public std::exception
    {
        const char* what() const throw()
        {
            return ("Form is not signed!");
        }
    };
	
    
	
    void beSigned(const Bureaucrat &_bureaucrat);
    void checkExecute(Bureaucrat const& executor) const ;
    virtual void execute(Bureaucrat const & executor) const = 0;

		


};


#endif