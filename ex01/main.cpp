/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: ageels <ageels@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/30 16:48:28 by ageels        #+#    #+#                 */
/*   Updated: 2023/03/31 13:38:39 by ageels        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	int N = 3;
	Zombie *group;

	group = zombieHorde(N, "Joshua");
	for (int i(0); i < N; i++)
		group[i].announce();
	delete [] group;
}