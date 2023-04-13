/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   harl.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: ageels <ageels@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/04/13 14:47:23 by ageels        #+#    #+#                 */
/*   Updated: 2023/04/13 15:40:10 by ageels        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "inc/harl.hpp"

void	Harl::debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void	Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}

void	Harl::warning(void)
{
std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void	Harl::complain(std::string level)
{
	void	(Harl::*ptr_debug)(void) = &Harl::debug;

	if (level.compare("DEBUG") == 0)
		(*ptr_debug)();
}
