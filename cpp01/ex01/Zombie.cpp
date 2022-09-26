/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: requinch <requinch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 11:55:43 by requinch          #+#    #+#             */
/*   Updated: 2022/09/25 17:56:48 by requinch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
	_name = "An unnamed zombie";
	std::cout << _name << " has been created." << std::endl;
}

Zombie::Zombie(const std::string name)
{
	_name = name;
	std::cout << _name << " Has been created." << std::endl;
}

Zombie::~Zombie(void)
{
	std::cout << _name << " Has been destroyed." << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::setname(std::string name)
{
	std::cout << _name;
	_name = name;
	std::cout << " has been named " << _name << "." << std::endl;
}

std::string	Zombie::getname()
{
	return (_name);
}