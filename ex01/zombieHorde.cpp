/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   zombieHorde.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: ageels <ageels@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/30 16:28:52 by ageels        #+#    #+#                 */
/*   Updated: 2023/03/31 13:38:52 by ageels        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*zombieHorde(int num, std::string name)
{
	Zombie *Horde = NULL;

	try
	{
		Horde = new Zombie[num];
	}
	catch (std::bad_alloc& ba)
	{
		std::cerr << "bad_alloc caught: " << ba.what() << std::endl;
	}
	for (int i(0); i < num; i++)
		Horde[i].setname(name);
	return (Horde);
}