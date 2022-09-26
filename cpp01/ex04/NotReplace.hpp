/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NotReplace.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: requinch <requinch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 15:33:20 by requinch          #+#    #+#             */
/*   Updated: 2022/07/01 17:10:49 by requinch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NOTREPLACE_HPP
# define NOTREPLACE_HPP

# include <iostream>
# include <fstream>
# include <algorithm>

class NotReplace {
public :
	void routine(char* filename, std::string rep, std::string sub);
};

#endif