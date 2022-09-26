/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: requinch <requinch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 15:29:20 by requinch          #+#    #+#             */
/*   Updated: 2022/07/01 17:18:23 by requinch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NotReplace.hpp"

int main(int ac, char **argv)
{
	NotReplace n;

	if (ac != 4)
	{
		std::cout << "Wrong number of arguments !" << std::endl;
		return 0;
	}
	n.routine(argv[1], argv[2], argv[3]);
	return 0;
}