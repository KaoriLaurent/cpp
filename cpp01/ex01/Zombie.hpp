/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: requinch <requinch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 11:54:57 by requinch          #+#    #+#             */
/*   Updated: 2022/09/25 17:48:06 by requinch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie {
public:
	//Constructors
	Zombie();
	Zombie(const std::string name);
	//Destructors
	virtual ~Zombie();
	//Methods
	void		announce(void);
	void		setname(std::string name);
	std::string	getname();
private:
	//Properties
	std::string	_name;
};

Zombie* zombieHorde(int N, std::string name);

#endif