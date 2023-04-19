/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanB.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: ageels <ageels@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/31 12:53:52 by ageels        #+#    #+#                 */
/*   Updated: 2023/04/19 12:04:38 by ageels        ########   odam.nl         */
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
