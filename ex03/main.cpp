/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: ageels <ageels@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/30 17:34:00 by ageels        #+#    #+#                 */
/*   Updated: 2023/04/19 12:10:45 by ageels        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

//#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
	Weapon	sword("iron sword");
	Weapon	hammer("warhammer");
	Weapon	staff("magic staff");
	HumanA	knight("Roderick", sword);
	HumanB	wizard("Merlin");

	wizard.attack();
	knight.attack();
	wizard.setWeapon(hammer);
	wizard.attack();
	sword.setType("long steel sword");
	knight.attack();
	wizard.setWeapon(staff);
	wizard.attack();
	staff.setType("small wand");
	wizard.attack();
	knight.attack();
	return (0);
}
