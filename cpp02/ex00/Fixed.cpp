/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: requinch <requinch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 18:42:21 by requinch          #+#    #+#             */
/*   Updated: 2022/09/25 19:41:46 by requinch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(){
	_value = 0;
	std::cout << "\tDebug\tDefault constructor called." << std::endl;
}

Fixed::Fixed(const Fixed& copy){
	_value = copy._value;
	std::cout << "\tDebug\tCopy constructor called." << std::endl;
}

Fixed::~Fixed(){
	std::cout << "\tDebug\tDestructor called." << std::endl;
}

Fixed& Fixed::operator=(const Fixed& rhs){
	_value = rhs._value;
	std::cout << "\tDebug\tCopy assignment operator called." << std::endl;
	return *this;
}

int	Fixed::getRawBits(void) const{
	std::cout << "\tDebug\tGetting raw bits." << std::endl;
	return (_value);
}

void	Fixed::setRawBits(int const raw){
	std::cout << "\tDebug\tSetting raw bits." << std::endl;
	_value = raw;
}