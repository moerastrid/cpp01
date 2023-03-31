/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Weapon.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: ageels <ageels@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/30 17:41:03 by ageels        #+#    #+#                 */
/*   Updated: 2023/03/31 14:33:34 by ageels        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) : _type(type)
{
	//std::cout << "Create " << type << std::endl;
}

Weapon::~Weapon()
{
	//std::cout << "Destroy " << this->_type << std::endl;
}

const std::string	Weapon::getType()
{
	return (this->_type);
}

void	Weapon::setType(std::string type)
{
	//std::cout << "Change " << this->_type << " to " << type << std::endl;
	this->_type = type;
}