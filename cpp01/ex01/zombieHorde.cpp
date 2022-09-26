/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: requinch <requinch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 12:23:05 by requinch          #+#    #+#             */
/*   Updated: 2022/09/25 17:50:02 by requinch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
	if (N < 1)
		return NULL;

	Zombie *zoms = new Zombie[N];

	for (int i = 0; i < N; i++)
		zoms[i].setname(name);
	return zoms;
}