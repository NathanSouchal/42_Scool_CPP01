/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsouchal <nsouchal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 09:27:07 by nsouchal          #+#    #+#             */
/*   Updated: 2024/07/17 09:58:03 by nsouchal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	Zombie*	zombieHorde_ptr;

	zombieHorde_ptr = new Zombie[N];
	if (!zombieHorde_ptr)
		return (NULL);
	for(int i = 0; i < N; i++)
		zombieHorde_ptr[i].set_name(name);
	return (zombieHorde_ptr);
}