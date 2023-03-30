/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: ageels <ageels@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/27 14:41:58 by ageels        #+#    #+#                 */
/*   Updated: 2023/03/30 17:06:08 by ageels        ########   odam.nl         */
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
		Zombie(std::string	name);
		~Zombie();
		void	announce(void);	
};

Zombie* newZombie( std::string name );
void randomChump( std::string name );
