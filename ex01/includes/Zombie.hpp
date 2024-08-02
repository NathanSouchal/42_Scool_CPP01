/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsouchal <nsouchal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 13:04:52 by nsouchal          #+#    #+#             */
/*   Updated: 2024/07/17 09:27:01 by nsouchal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <cstring>

class Zombie
{
	private:
	std::string	name;

	public:
	~Zombie();
	void		set_name(std::string name);
	void		announce(void);
};

Zombie*	zombieHorde( int N, std::string name );

#endif