/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Weapon.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: ageels <ageels@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/30 17:34:57 by ageels        #+#    #+#                 */
/*   Updated: 2023/03/31 14:16:55 by ageels        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

#ifndef WEAPON_HPP
#define WEAPON_HPP

class Weapon
{
	private : 
		std::string			_type;

	public :
		Weapon(std::string	type);
		~Weapon();

		const std::string	getType();
		void				setType(std::string type);
};

#endif