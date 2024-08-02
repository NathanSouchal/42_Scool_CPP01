/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsouchal <nsouchal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 14:17:46 by nsouchal          #+#    #+#             */
/*   Updated: 2024/07/17 09:18:10 by nsouchal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

Zombie* newZombie(std::string name)
{
	Zombie	*new_Zombie_ptr;

	new_Zombie_ptr = new Zombie;
	if (!new_Zombie_ptr)
		return (NULL);
	(*new_Zombie_ptr).set_name(name);
	return (new_Zombie_ptr);
}