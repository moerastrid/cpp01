/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Weapon.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: ageels <ageels@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/30 17:34:57 by ageels        #+#    #+#                 */
/*   Updated: 2023/03/30 17:49:31 by ageels        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

class Weapon
{
	private : 
		std::string			type;
	public :
		Weapon(std::string	type);
		~Weapon();
		const std::string	getType();
		void				setType(std::string type);
};
