#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("Didier"){
	_grade = 150;
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy) : _name(copy._name){
	_grade = copy._grade;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name){
	if (grade < 1)
		throw GradeTooHighException();
	else if (grade > 150)
		throw GradeTooLowException();
	else
		_grade = grade;
}

Bureaucrat	&Bureaucrat::operator=(const Bureaucrat &rhs)
{
	_grade = rhs._grade;
	return *this;
}

Bureaucrat::~Bureaucrat(){
}

std::string	Bureaucrat::getName(void) const{
	return _name;
}
int			Bureaucrat::getGrade(void) const{
	return _grade;
}

void	Bureaucrat::incrementGrade(void){
	if (_grade < 2)
		throw GradeTooHighException();
	_grade--;
}

void	Bureaucrat::decrementGrade(void){
	if (_grade > 149)
		throw GradeTooLowException();
	_grade++;
}

void	Bureaucrat::signForm(Form &form){
	try	{
		form.beSigned(*this);
		std::cout << getName() << " signed " << form.getName() << std::endl;
	}
	catch(const std::exception& e)	{
		std::cout << getName() << " couldn't sign " << form.getName() << " because : " << e.what() << std::endl;
	}
	
}

const char	*Bureaucrat::GradeTooHighException::what() const throw(){
	return ("Grade too high");
}

const char	*Bureaucrat::GradeTooLowException::what() const throw(){
	return ("Grade too low");
}


std::ostream	&operator<<(std::ostream &o, const Bureaucrat &b)
{
	o << b.getName() << ", bureaucrat grade " << b.getGrade();
	return (o);
}
