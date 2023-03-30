/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Weapon.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: ageels <ageels@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/30 17:41:03 by ageels        #+#    #+#                 */
/*   Updated: 2023/03/30 17:54:11 by ageels        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
	this->type = type;
	std::cout << "Create " << type << std::endl;
}

Weapon::~Weapon(void)
{
	std::cout << "Destroy " << type << std::endl;
}

const std::string	Weapon::getType()
{
	return (this->type);
}

void	Weapon::setType(std::string type)
{
	std::cout << "Change " << this->type << " to " << type << std::endl;
	this->type = type;
}