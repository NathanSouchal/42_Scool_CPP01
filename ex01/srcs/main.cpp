/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsouchal <nsouchal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 09:25:09 by nsouchal          #+#    #+#             */
/*   Updated: 2024/07/19 10:29:05 by nsouchal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

int main()
{
	Zombie*	horde_ptr;
	int		nb_zombies = 10;

	horde_ptr = zombieHorde(nb_zombies, "Michou");
	if (!horde_ptr)
		return (1);
	for (int i = 0; i < nb_zombies; i++)
		horde_ptr[i].announce();
	delete[] (horde_ptr);
	return (0);
}