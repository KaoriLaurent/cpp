/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: requinch <requinch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 13:00:50 by requinch          #+#    #+#             */
/*   Updated: 2022/09/25 18:14:30 by requinch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

const std::string&	Weapon::getType(void)
{
	std::string	&ref = _type;
	return (ref);
}

void	Weapon::setType(std::string type)
{
	_type = type;
}

Weapon::Weapon()
{
	_type = "bare hands";
}

Weapon::Weapon(std::string type)
{
	_type = type;
}

Weapon::~Weapon()
{
	std::cout<< _type << " has been destroyed." << std::endl;
}