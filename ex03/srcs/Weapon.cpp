/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsouchal <nsouchal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 13:08:47 by nsouchal          #+#    #+#             */
/*   Updated: 2024/07/19 10:39:14 by nsouchal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Weapon.hpp"

const std::string&	Weapon::getType() const
{
	return (_type);
}

void	Weapon::setType(std::string new_type)
{
	_type = new_type;
}

Weapon::Weapon(std::string type): _type(type)
{

}