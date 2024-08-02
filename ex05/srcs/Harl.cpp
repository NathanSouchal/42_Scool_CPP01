/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsouchal <nsouchal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 13:32:23 by nsouchal          #+#    #+#             */
/*   Updated: 2024/07/19 10:49:55 by nsouchal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Harl.hpp"

void	Harl::debug(void)
{
	std::cout << "DEBUG message" << std::endl;
}

void	Harl::info(void)
{
	std::cout << "INFO message" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "WARNING message" << std::endl;
}

void	Harl::error(void)
{
	std::cout << "ERROR message" << std::endl;
}

void Harl::complain(std::string level)
{
	typedef void (Harl::*functionsPtr)();

	functionsPtr array_f_ptr[] = {&Harl::debug, \
	&Harl::info, &Harl::warning, &Harl::error};
	std::string level_array[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (int i = 0; i < 4; i++)
	{
		if (!level.compare(level_array[i]))
		{
			(this->*array_f_ptr[i])();
			break ;
		}
	}
}