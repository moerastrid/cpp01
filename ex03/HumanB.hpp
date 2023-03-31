/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanB.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: ageels <ageels@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/31 12:53:52 by ageels        #+#    #+#                 */
/*   Updated: 2023/03/31 14:28:32 by ageels        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

class	HumanB
{
	private :
		std::string	_name;
		Weapon		*_weapon;

	public :
		HumanB(std::string name);
		~HumanB();

		void		setWeapon(Weapon &weapon);
		void		attack(void);
};
