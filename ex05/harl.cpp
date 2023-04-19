/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   harl.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: ageels <ageels@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/04/13 14:47:23 by ageels        #+#    #+#                 */
/*   Updated: 2023/04/17 17:46:03 by ageels        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "inc/harl.hpp"

void	Harl::debug(void)
{
	std::cout << "I love that color of lipstick on you!" << std::endl;
}

void	Harl::info(void)
{
	std::cout << "You'd be prettier with long hair..." << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "You should smile more." << std::endl;
}

void	Harl::error(void)
{
	std::cout << "Boys will be boys. You know how it is." << std::endl;
}

void	Harl::complain(std::string level) 
{
	void		(Harl::*harlptr[])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string	complaints[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	
	for (int i(0); i < 4; i++)
	{
		if (level.compare(complaints[i]) == 0)
		{
			(this->*harlptr[i])();
			return ;
		}
	}
	std::cout << "Just calm down! " << level << " isn't very ladylike" << std::endl;
}
