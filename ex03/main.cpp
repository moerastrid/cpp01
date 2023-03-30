/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: ageels <ageels@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/30 17:34:00 by ageels        #+#    #+#                 */
/*   Updated: 2023/03/30 17:50:02 by ageels        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

int main()
{
	{
		Weapon club = Weapon("crude spiked club");
		//HumanA bob("Bob", club);
		//bob.attack();
		club.setType("some other type of club");
		//bob.attack();
	}
	{
		Weapon club = Weapon("crude spiked club");
		//HumanB jim("Jim");
		//jim.setWeapon(club);
		//jim.attack();
		club.setType("some other type of club");
		//jim.attack();
	}
	return 0;
}