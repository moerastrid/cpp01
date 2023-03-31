/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: ageels <ageels@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/31 15:03:30 by ageels        #+#    #+#                 */
/*   Updated: 2023/03/31 17:37:15 by ageels        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

void	find_origin(std::string &origin, std::fstream &file)
{
	std::string		line;

	while (file.good())
	{
		getline(file, line);
		origin.append(line);
		origin.append("\n");
	}
	std::cout << origin << std::endl;
}

bool	ok_args(int argc, char **argv, std::fstream &file)
{
	if (argc != 4)
	{
		std::cerr << "wrong amount of arguments" << std::endl;
		return (false);
	}
	file.open(argv[1], std::fstream::in |  std::fstream::out);
	if (!file)
	{
		std::cerr << "no file" << std::endl;
		return (false);
	}
	return (true);
}

int main(int argc, char **argv)
{
	std::fstream	file;
	std::string		origin;
	
	if (ok_args(argc, argv, file) == false)
		return (1);
	find_origin(origin, file);
	file.close();
	return (0);
}
