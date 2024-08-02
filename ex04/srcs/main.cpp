/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsouchal <nsouchal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 08:45:53 by nsouchal          #+#    #+#             */
/*   Updated: 2024/07/18 12:36:25 by nsouchal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/sed.hpp"

int main(int argc, char **argv)
{
	std::string	filename;
	std::string	str_to_replace;
	std::string	new_str;
	std::string	line;
	std::string	outfile_name;

	if (argc == 4)
	{
		filename = argv[1];
		str_to_replace = argv[2];
		new_str = argv[3];
		std::ifstream infile(filename.c_str());
		if (!infile.is_open())
		{
			std::cerr << "Error opening infile!" << std::endl;
			return (1);
		}
		outfile_name = filename + ".replace";
		std::ofstream outfile(outfile_name.c_str());
		if (!outfile.is_open())
		{
			std::cerr << "Error opening outfile!" << std::endl;
			infile.close();
			return (1);
		}
		while (std::getline(infile, line))
		{
			if (!infile.eof())
				outfile << replace(line, str_to_replace, new_str) << std::endl;
			else
				outfile << replace(line, str_to_replace, new_str);
    	}
		infile.close();
		outfile.close();
	}
	return (0);
}
