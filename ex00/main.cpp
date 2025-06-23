// #include "Bureaucrat.cpp"
#include "Bureaucrat.hpp"
#include <iostream>


#include "Bureaucrat.hpp"

int main() {

	/*------------------- test 1 ------------------*/
	try
	{
		Bureaucrat b("chahlaooui",3);
		b.incrementGrade();
	
		std::cout << b;
	
		return (0);
		/* code */
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
}
