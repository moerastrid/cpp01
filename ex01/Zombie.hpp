/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: ageels <ageels@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/27 14:41:58 by ageels        #+#    #+#                 */
/*   Updated: 2023/03/30 17:05:02 by ageels        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <new>

class Zombie
{
	private:
		std::string	name;

	public:
		Zombie();
		~Zombie();
		void	setname(std::string name);
		void	announce(void);	
};

Zombie* zombieHorde( int N, std::string name );