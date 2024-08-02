/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsouchal <nsouchal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 11:52:59 by nsouchal          #+#    #+#             */
/*   Updated: 2024/07/19 10:38:58 by nsouchal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <cstring>
# include <iostream>

class Weapon
{
	private:
	std::string	_type;

	public:
	const std::string&	getType() const;
	void			setType(std::string new_type);
	Weapon(std::string type);
};

#endif