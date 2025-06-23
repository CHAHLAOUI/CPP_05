#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("Security") , note(150)
{}

Bureaucrat::Bureaucrat(std::string _name, int _note) : name(_name)
{
    if (_note < 1)
        throw GradeTooHighException();
    else if (_note > 150)
        throw GradeTooLowException();
    note = _note;
}


Bureaucrat::Bureaucrat(const Bureaucrat& obj) : name(obj.getName())
{
    std::cout << "contructor copy " << std::endl;
    note = obj.getGrade();
}
Bureaucrat& Bureaucrat::operator=(const Bureaucrat& obj)
{
    if(this != &obj)
    {
        std::cout << "contructor de = " << std::endl;
        note = obj.getGrade();

    }
    return (*this);
}




void Bureaucrat::incrementGrade() {
    if (note <= 1)
        throw GradeTooHighException();
    note--;
}

void Bureaucrat::decrementGrade() {
    if (note >= 150)
        throw GradeTooLowException();
    note++;
}



Bureaucrat::~Bureaucrat() {}


const std::string Bureaucrat::getName() const {
    return (name);
}

int Bureaucrat::getGrade() const {
    return (note);
}

void Bureaucrat::signForm(AForm& form) {
    try {
        form.beSigned(*this);
        std::cout << name << " signed " << form.getName() << std::endl;
    } catch (std::exception& e) {
        std::cout << name << " couldn’t sign " << form.getName()
                  << " because " << e.what() << std::endl;
    }
}




void Bureaucrat::executeForm(AForm const &form)
{
    (void)form;
    // std::cout << "hhhhhh";
}


std::ostream&	operator<<(std::ostream& o, const Bureaucrat & obj)
 {
	o << obj.getName() << ", bureaucrat grade " << obj.getGrade() << std::endl;
	return o;
}
