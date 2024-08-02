/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsouchal <nsouchal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 13:04:33 by nsouchal          #+#    #+#             */
/*   Updated: 2024/07/17 09:19:22 by nsouchal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

int	main()
{
	Zombie*	Pascal;
	Pascal = newZombie("Pascal");
	if (!Pascal)
		return (1);
	Pascal->announce();
	randomChump("Jacques");
	delete (Pascal);
	return (0);
}