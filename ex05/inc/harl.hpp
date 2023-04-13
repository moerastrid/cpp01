/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   harl.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: ageels <ageels@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/31 19:04:22 by ageels        #+#    #+#                 */
/*   Updated: 2023/04/13 15:17:04 by ageels        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>
# include <string>

class Harl
{
	private :
		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);
	public :
		//Harl(void);
		//~Harl(void);
		void	complain(std::string level);
};

#endif