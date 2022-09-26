/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: requinch <requinch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 13:03:48 by requinch          #+#    #+#             */
/*   Updated: 2022/09/25 18:03:53 by requinch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"

class HumanA {
public:
	HumanA();
	HumanA(std::string name, Weapon &weapon);
	virtual ~HumanA();
	void	attack(void);
	void	setWeapon(Weapon weapon);
private:
	std::string	_name;
	Weapon&		_weapon;
};

#endif