/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanA.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: ageels <ageels@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/31 12:53:50 by ageels        #+#    #+#                 */
/*   Updated: 2023/03/31 14:16:12 by ageels        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

class	HumanA
{
	private :
		std::string	_name;
		Weapon		&_weapon;

	public :
		HumanA(std::string name, Weapon &weapon);
		~HumanA();

		void	attack(void);
};
