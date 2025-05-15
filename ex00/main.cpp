// #include "Bureaucrat.cpp"
#include "Bureaucrat.hpp"
#include <iostream>


#include "Bureaucrat.hpp"

int main() {

	/*------------------- test 1 ------------------*/
	try {
			// Bureaucrat b("kahy", 1);
			// std::cout << b.getGrade(); 
			// std::cout << b;  
			// b.incrementGrade();
			// std::cout << b;  
			// b.decrementGrade();
			// std::cout << b << std::endl;

			// Testing exception

			/*------------------ High increment Grade --------------------------*/
			Bureaucrat c("chahlaoui",  12);
			std::cout << c;  
			c.incrementGrade(); 
			std::cout << c;  
			 // This will throw GradeTooHighException
			/*------------------ Low decrement Grade -------------------------*/
			Bureaucrat d("Low Grade", 150);
			d.decrementGrade();  // This will throw GradeTooLowException
		} catch (const Bureaucrat::GradeTooHighException& ex) {
            std::cout << "rrrrrrrrrrrrrr\n";
			std::cout << ex.what() << std::endl;
		} catch (const Bureaucrat::GradeTooLowException& ex) {
            std::cout << "eeeeeeeeeeeeeeeeee\n";

			std::cout << ex.what() << std::endl;
		}

	return 0;
}