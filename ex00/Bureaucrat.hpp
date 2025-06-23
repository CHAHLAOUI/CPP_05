/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achahlao <achahlao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 17:26:19 by achahlao          #+#    #+#             */
/*   Updated: 2025/06/23 10:39:53 by achahlao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
		
		// exeptiom
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
		
		// getter de name et Grad
		const std::string	getName() const;
		int					getGrade() const;

};

std::ostream&	operator<<(std::ostream& o, const Bureaucrat & obj);


#endif