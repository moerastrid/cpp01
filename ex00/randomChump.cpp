/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   randomChump.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: ageels <ageels@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/30 15:15:16 by ageels        #+#    #+#                 */
/*   Updated: 2023/03/30 15:52:17 by ageels        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	randomChump(std::string randomName)
{
	Zombie	randy(randomName);

	randy.announce();
}