/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: requinch <requinch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 18:42:26 by requinch          #+#    #+#             */
/*   Updated: 2022/09/25 19:17:59 by requinch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed{
	private:
		//Attributes
		int					_value;
		static const int	_fract = 8;
	public:
		//Constructors
		Fixed();
		Fixed(const Fixed& copy);
		//Destructors
		~Fixed();
		//Overloads
		Fixed& operator=(const Fixed& rhs);
		//Methods
		int		getRawBits() const;
		void	setRawBits(int const raw);
};

#endif