/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanB.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: ageels <ageels@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/31 13:49:17 by ageels        #+#    #+#                 */
/*   Updated: 2023/04/19 12:09:13 by ageels        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name)
{
	this->_weapon = NULL;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
}

HumanB::~HumanB()
{
	//delete this->_weapon;
	//std::cout << this->_name << " died" << std::endl;
}

void	HumanB::attack(void)
{
	std::cout << this->_name << " attacks with their " ;
	if (this->_weapon == NULL)
		std::cout << "bare hands" << std::endl;
	else
		std::cout << this->_weapon->getType() << std::endl;
}
