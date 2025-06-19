#ifndef AFORM_HPP
#define AFORM_HPP

#include <iostream>
#include <string>
#include <exception>

class Bureaucrat;

class AForm {
protected:
    const std::string   name_Form;
    const int           sign_Grad;
    const int           execut_Grad;
    bool                is_Sign;
    // std::string         _target;

public:
    AForm(std::string _name, const int _sign_Grad, const int _execut_Grad);
    AForm(const AForm &other);
    AForm& operator=(const AForm& obj);
    virtual ~AForm();

    // Getters
    const   std::string& getName()  const;
    bool    isSigned()              const;
    int     getGradeSign()          const;
    int     getGradeExec()          const;
    // std::string getTarget()         const;

    // Exceptions
    class GradeTooHighException : public std::exception
    {
        public:
            const char* what() const throw()
            { 
                return "Grade too high!"; 
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
        public:
            const char* what() const throw()
            {
                 return "Form is not signed!";
            }
    };

    // Methods 
    void beSigned(const Bureaucrat& b);

    /*----------------fonction qui tester o exectue forme ------*/
    void checkExecute(const Bureaucrat& executor) const;
    virtual void execute(const Bureaucrat& executor) const = 0;
};

std::ostream& operator<<(std::ostream& o, const AForm& obj) ;

#endif


