#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <exception>
# include "Form.hpp"

class Form;

class Bureaucrat{
	protected:
	//Attributes
		const std::string		_name;
		int						_grade;
	public:
	//Constructors
		Bureaucrat();
		Bureaucrat(const Bureaucrat &copy);
		Bureaucrat(std::string name, int grade);
	//Destructors
		~Bureaucrat();
	//Overloads
		Bureaucrat&	operator=(const Bureaucrat& rhs);
	//Methods
		std::string	getName(void) const;
		int			getGrade(void) const;
		void		incrementGrade(void);
		void		decrementGrade(void);
		void		signForm(Form &form);
	//Exceptions
		class	GradeTooHighException : public std::exception{
			public:
				const char	*what() const throw();};
		class	GradeTooLowException : public std::exception{
			public:
				const char	*what() const throw();};
};

std::ostream	&operator<<(std::ostream &lhs, const Bureaucrat &rhs);

#endif
