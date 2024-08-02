/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomCump.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsouchal <nsouchal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 14:25:38 by nsouchal          #+#    #+#             */
/*   Updated: 2024/07/16 14:29:12 by nsouchal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

void	randomChump(std::string name)
{
	Zombie	new_zombie;

	new_zombie.set_name(name);
	new_zombie.announce();
}