/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: requinch <requinch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 11:54:57 by requinch          #+#    #+#             */
/*   Updated: 2022/09/25 15:56:26 by requinch         ###   ########.fr       */
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
	void	announce(void);
private:
	//Properties
	std::string	_name;
};

Zombie* newZombie(std::string name);
void randomChump(std::string name);

#endif