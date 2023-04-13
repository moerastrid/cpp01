/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: ageels <ageels@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/04/13 14:43:22 by ageels        #+#    #+#                 */
/*   Updated: 2023/04/13 15:08:33 by ageels        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "inc/harl.hpp"

int main()
{
	Harl harl;

	harl.complain("DEBUG");
	harl.complain("INFO");
	harl.complain("WARNING");
	harl.complain("ERROR");
	harl.complain("invalid");
}