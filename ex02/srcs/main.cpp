/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsouchal <nsouchal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 10:54:26 by nsouchal          #+#    #+#             */
/*   Updated: 2024/07/17 11:05:22 by nsouchal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstring>
#include <iostream>

int	main()
{
	std::string		str = "HI THIS IS BRAIN";
	std::string*	stringPTR = NULL;
	std::string&	stringREF = str;
	stringPTR = &str;

	std::cout << "memory address of the string variable: " << &str << std::endl;
	std::cout << "memory address held by stringPTR: " << stringPTR << std::endl;
	std::cout << "memory address held by stringREF: " << &stringREF << std::endl;
	std::cout << "value of the string variable: " << str << std::endl;
	std::cout << "value pointed to by stringPTR: " << *stringPTR << std::endl;
	std::cout << "value pointed to by stringREF: " << stringREF << std::endl;

	return (0);
}