/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NotReplace.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: requinch <requinch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 15:34:07 by requinch          #+#    #+#             */
/*   Updated: 2022/09/25 18:32:28 by requinch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NotReplace.hpp"

void NotReplace::routine(char* filename, std::string rep, std::string sub)
{
	std::ifstream inputstream;
	std::ofstream outputstream;
	std::string res;
	std::string o_filename;
	std::string ext = ".replace";

	if (filename == NULL || filename[0] == 0 || rep.empty() || sub.empty())
	{
		std::cout << "Arguments cannot be empty." << std::endl;
		return;
	}
	inputstream.open(filename);
	std::cout << inputstream.is_open() << std::endl;
	if (!inputstream.is_open())
		return;
	res.assign(std::istreambuf_iterator<char>(inputstream), std::istreambuf_iterator<char>());
	for (size_t pos = 0; pos < res.length(); pos++)
		if (res.compare(pos, rep.length(), rep) == 0)
		{
			res.erase(pos, rep.length());
			res.insert(pos, sub);
		}
	o_filename.append(filename);
	o_filename.append(ext);
	outputstream.open(o_filename.c_str());
	outputstream << res;
	inputstream.close();
	outputstream.close();
	return;
}