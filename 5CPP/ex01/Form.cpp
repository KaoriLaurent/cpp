#include "Form.hpp"

Form::Form() : _name("Didier"), _signGrade(150), _execGrade(150){
	_signed = false;
}

Form::Form(const Form &copy) : _name(copy._name), _signGrade(copy._signGrade), _execGrade(copy._execGrade){
	_signed = copy._signed;
}

Form::Form(std::string name, int signGrade, int execGrade) : _name(name), _signGrade(signGrade), _execGrade(execGrade){
	if (signGrade < 1 || execGrade < 1)
		throw GradeTooHighException();
	else if (signGrade > 150 || execGrade < 1)
		throw GradeTooLowException();
	_signed = false;
}

Form	&Form::operator=(const Form &rhs)
{
	_signed = rhs._signed;
	return *this;
}

Form::~Form(){
}

const std::string	Form::getName(void) const{
	return _name;
}
bool				Form::getSigned(void) const{
	return _signed;
}

int					Form::getSignGrade(void) const{
	return _signGrade;
}

int					Form::getExecGrade(void) const{
	return _execGrade;
}

void				Form::beSigned(const Bureaucrat& goon){
	if (getSigned())
		throw FormAlreadySignedException();
	else if (goon.getGrade() <= _signGrade)
		_signed = true;
	else
		throw GradeTooLowException();
}

const char	*Form::FormAlreadySignedException::what() const throw(){
	return ("Form is already signed.");
}

const char	*Form::GradeTooHighException::what() const throw(){
	return ("Grade too high.");
}

const char	*Form::GradeTooLowException::what() const throw(){
	return ("Grade too low.");
}

std::ostream	&operator<<(std::ostream &lhs, const Form &rhs)
{
	if (rhs.getSigned())
		lhs << rhs.getName() << " is signed. Required execution grade : " << rhs.getExecGrade() << ".";
	else 
		lhs << rhs.getName() << " is not signed. Required signing grade : " << rhs.getSignGrade() << ". Required execution grade : " << rhs.getExecGrade() << ".";
	return (lhs);
}
