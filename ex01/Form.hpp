/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achahlao <achahlao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 16:23:34 by achahlao          #+#    #+#             */
/*   Updated: 2025/06/20 21:30:28 by achahlao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Form.hpp
#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form 
{
    private:
        const   std::string name_Form;
        const   int sign_Grad;
        const   int execut_Grad;
        bool    is_Sign;

    public:
        // Form();
        Form(const std::string& name, int signGrade, int exec_Grade);
        
        Form(const Form& other);
        
        Form& operator=(const Form& obj);
        
        ~Form();

        // Getters
        const std::string& getName()      const;
        bool               isSigned()     const;
        int                getSignGrade() const;
        int                getExecGrade() const;


        // foctiob beSigned 
        void beSigned(const Bureaucrat& bureaucrat);

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
};


std::ostream& operator<<(std::ostream& os, const Form& F);

#endif


