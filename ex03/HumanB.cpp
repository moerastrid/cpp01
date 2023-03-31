/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanB.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: ageels <ageels@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/31 13:49:17 by ageels        #+#    #+#                 */
/*   Updated: 2023/03/31 14:33:39 by ageels        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name)
{
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
}

HumanB::~HumanB()
{
	//std::cout << this->_name << " died" << std::endl;
}

void	HumanB::attack(void)
{
	std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
}
