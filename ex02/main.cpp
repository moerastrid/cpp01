/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: ageels <ageels@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/30 17:11:57 by ageels        #+#    #+#                 */
/*   Updated: 2023/03/30 17:21:33 by ageels        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
	std::string	variable = "HI THIS IS BRAIN";
	std::string	*stringPTR = &variable;
	std::string &stringREF = variable;

	std::cout << "variable" << "\t\t" << "stringPTR" << "\t\t" << "stringREF" << std::endl;
	std::cout << &variable << "\t\t" << stringPTR << "\t\t" << &stringREF << std::endl;
	std::cout << variable << "\t" << *stringPTR << "\t" << stringREF << std::endl;
}
