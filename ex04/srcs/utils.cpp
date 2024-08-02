/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsouchal <nsouchal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 09:28:44 by nsouchal          #+#    #+#             */
/*   Updated: 2024/07/19 10:44:43 by nsouchal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/sed.hpp"

std::string	replace(std::string str_to_modify, std::string s1, std::string s2)
{
	size_t	occurence_pos;

	occurence_pos = str_to_modify.find(s1);
	while (occurence_pos != std::string::npos)
	{
		str_to_modify.erase(occurence_pos, s1.length());
		str_to_modify.insert(occurence_pos, s2);
		occurence_pos = str_to_modify.find(s1, occurence_pos + s2.length());
	}
	return (str_to_modify);
}