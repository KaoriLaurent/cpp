/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: requinch <requinch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 13:05:39 by requinch          #+#    #+#             */
/*   Updated: 2022/09/25 18:04:36 by requinch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

class HumanB {
public:
	HumanB();
	HumanB(std::string name);
	virtual ~HumanB();
	void	attack(void);
	void	setWeapon(Weapon& weapon);
private:
	std::string	_name;
	Weapon*		_weapon;
};

#endif
