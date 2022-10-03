#include "Bureaucrat.hpp"

int	main(void)
{
	std::cout << "-----------------" << std::endl;
	try
	{
		Bureaucrat didier("Didier", 0);
	}
	catch (std::exception &e)
	{
		std::cerr << "Exception caught " << e.what() << std::endl;
	}
	try
	{
		Bureaucrat michel("Michel", 200);
	}
	catch(const std::exception& e)
	{
		std::cerr << "Exception caught " << e.what() << std::endl;
	}
	try
	{
		Bureaucrat didier("Didier", 1);
	}
	catch (std::exception &e)
	{
		std::cerr << "Exception caught " << e.what() << std::endl;
	}
	try
	{
		Bureaucrat michel("Michel", 150);
	}
	catch(const std::exception& e)
	{
		std::cerr << "Exception caught " << e.what() << std::endl;
	}

	std::cout << "-------Didier increments----------" << std::endl;
	try
	{
		Bureaucrat didier("Didier", 2);
		std::cout << didier << std::endl;
		didier.incrementGrade();
		std::cout << didier << std::endl;
		didier.incrementGrade();
		std::cout << didier << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Exception caught " << e.what() << std::endl;
	}

	std::cout << "-------Michel decrements----------" << std::endl;
	try
	{
		Bureaucrat michel("Michel", 149);
		std::cout << michel << std::endl;
		michel.decrementGrade();
		std::cout << michel << std::endl;
		michel.decrementGrade();
		std::cout << michel << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Exception caught " << e.what() << std::endl;
	}
	return (0);
}
