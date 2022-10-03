#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <exception>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form{
	private:
	//Attributes
		const std::string		_name;
		bool					_signed;
		const int				_signGrade;
		const int				_execGrade;
	public:
	//Constructors
		Form();
		Form(const Form &copy);
		Form(std::string name, int signGrade, int execGrade);
	//Destructors
		~Form();
	//Overloads
		Form&	operator=(const Form& rhs);
	//Methods
		const std::string	getName() const;
		bool				getSigned() const;
		int					getSignGrade() const;
		int					getExecGrade() const;
		void				beSigned(const Bureaucrat& goon);
	//Exceptions
		class	FormAlreadySignedException : public std::exception{
			public:
				const char	*what() const throw();};
		class	GradeTooHighException : public std::exception{
			public:
				const char	*what() const throw();};
		class	GradeTooLowException : public std::exception{
			public:
				const char	*what() const throw();};
};

std::ostream	&operator<<(std::ostream &lhs, const Form &rhs);

#endif