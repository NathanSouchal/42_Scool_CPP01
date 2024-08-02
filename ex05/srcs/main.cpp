/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsouchal <nsouchal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 09:28:43 by nsouchal          #+#    #+#             */
/*   Updated: 2024/07/19 10:49:41 by nsouchal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Harl.hpp"

int	main()
{
	Harl harl_obj;

	harl_obj.complain("INFO");
	harl_obj.complain("DEBUG");
	harl_obj.complain("WARNING");
	harl_obj.complain("ERROR");
	harl_obj.complain("ERRORsaddsa");
	harl_obj.complain("ERRORasdsad");
	harl_obj.complain("");
	return (0);
}