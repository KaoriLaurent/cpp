/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: requinch <requinch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 18:42:21 by requinch          #+#    #+#             */
/*   Updated: 2022/09/26 13:45:27 by requinch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

//Constructors

Fixed::Fixed(){
	_value = 0;
	std::cout << "\tDebug\tDefault constructor called." << std::endl;
}

Fixed::Fixed(const Fixed& copy){
	_value = copy._value;
	std::cout << "\tDebug\tCopy constructor called." << std::endl;
}

Fixed::Fixed(const int value){
	_value = value * 256;
	std::cout << "\tDebug\tInteger constructor called." << std::endl;
}

Fixed::Fixed(const float value){
	_value = (int)value * 256;
	_value += 128 * (2 * (value - _value / 256));
	std::cout << "\tDebug\tFloat constructor called." << std::endl;
}

//Destructors

Fixed::~Fixed(){
	std::cout << "\tDebug\tDestructor called." << std::endl;
}

//Overloads

Fixed& Fixed::operator=(const Fixed& rhs){
	_value = rhs._value;
	std::cout << "\tDebug\tCopy assignment operator called." << std::endl;
	return *this;
}

//Methods

int	Fixed::getRawBits(void) const{
	std::cout << "\tDebug\tGetting raw bits." << std::endl;
	return (_value);
}

void	Fixed::setRawBits(int const raw){
	std::cout << "\tDebug\tSetting raw bits." << std::endl;
	_value = raw;
}