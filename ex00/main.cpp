/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: ageels <ageels@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/27 14:18:58 by ageels        #+#    #+#                 */
/*   Updated: 2023/03/30 17:08:00 by ageels        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie	stacky("Stan");
	Zombie	*heapy;
	
	heapy = newZombie("Harold");
	stacky.announce();
	heapy->announce();
	randomChump("Ursula");
	delete heapy;
}
