/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achahlao <achahlao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 16:23:34 by achahlao          #+#    #+#             */
/*   Updated: 2025/05/17 17:57:52 by achahlao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;
class Form
{
private:
    std::string     name_Form;
    const int       sign_Grad;
    const int       execut_Grad;
    bool            is_Sign;
public:

    Form(std::string _name, const int _sign_Grand, const int _execut_Grad);
	

	const std::string &get_name_Form() const;
    bool get_is_Sign() const;
    int get_sign_Grad() const;
    int get_execut_Grad() const;

	void beSigned(const Bureaucrat &_bureaucrat);

	
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
	
		
	

		
    
    ~Form();
};




















#endif