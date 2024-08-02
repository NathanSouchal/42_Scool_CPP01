/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsouchal <nsouchal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 13:13:36 by nsouchal          #+#    #+#             */
/*   Updated: 2024/07/18 13:18:56 by nsouchal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>
# include <cstring>

class Harl
{
	private:
	void	debug(void);
	void	info(void);
	void	warning(void);
	void	error(void);

	public:
	void	complain(std::string level);
};

#endif