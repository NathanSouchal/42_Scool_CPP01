/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsouchal <nsouchal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 13:24:30 by nsouchal          #+#    #+#             */
/*   Updated: 2024/07/17 14:49:49 by nsouchal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/HumanB.hpp"

void	HumanB::attack()
{
	if (!_weapon)
		std::cout << _name << " attacks with their no weapon" << std::endl;
	else
		std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
}

HumanB::HumanB(std::string name): _weapon(NULL), _name(name)
{
}

void	HumanB::setWeapon(Weapon& weapon)
{
	_weapon = &weapon;
}