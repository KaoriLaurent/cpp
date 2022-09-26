/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: requinch <requinch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 12:05:23 by requinch          #+#    #+#             */
/*   Updated: 2022/09/25 17:59:17 by requinch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
	int num = 5;
	Zombie *horde = zombieHorde(num, "BAlan");

	for (int i = 0; i < num; i++)
		horde[i].announce();
	delete[] horde;
	return 0;
}