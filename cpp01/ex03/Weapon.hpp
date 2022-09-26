/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: requinch <requinch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 12:59:44 by requinch          #+#    #+#             */
/*   Updated: 2022/09/25 18:14:00 by requinch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>

class Weapon {
public:
	const std::string	&getType(void);
	void				setType(std::string type);
	Weapon();
	Weapon(std::string type);
	virtual	~Weapon();
private:
	std::string	_type;
};

#endif