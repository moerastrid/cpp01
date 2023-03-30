/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   newZombie.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: ageels <ageels@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/30 15:15:01 by ageels        #+#    #+#                 */
/*   Updated: 2023/03/30 17:26:50 by ageels        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* newZombie(std::string newName)
{
	Zombie *myZombie;

	try
	{
		myZombie = new Zombie(newName);
	}
	catch(const std::bad_alloc& ba)
	{
		std::cerr << "bad_alloc caught: " << ba.what() << '\n';
	}
	
	return (myZombie);
}