/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: ageels <ageels@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/31 15:03:30 by ageels        #+#    #+#                 */
/*   Updated: 2023/04/13 14:37:53 by ageels        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "inc/head.h"

void	get_text(std::string &text, std::fstream &file)
{
	std::string		line;

	getline(file, line);
	while (file.good())
	{
		text.append(line);
		text.append("\n");
		getline(file, line);
	}
	text.append(line);
}

void	set_text(std::string &text, char **argv)
{
	std::size_t		found(0);

	found = text.find(argv[2]);
	while (found != std::string::npos)
	{
		text.erase(found, ((std::string)argv[2]).length());
		text.insert(found, argv[3]);
		found += ((std::string)argv[3]).length();
		
		found = text.find(argv[2], found);
	}
}

bool	ok_args(int argc, char **argv, std::fstream &file)
{
	if (argc != 4)
	{
		std::cerr << "wrong amount of arguments" << std::endl;
		return (false);
	}
	file.open(argv[1], std::fstream::in);
	if (!file)
	{
		std::cerr << "no file" << std::endl;
		return (false);
	}
	return (true);
}

int main(int argc, char **argv)
{
	std::fstream	f_source;
	std::fstream	f_dest;
	std::string		text;
	std::string		newname;
	
	if (ok_args(argc, argv, f_source) == false)
		return (1);
	newname = argv[1];
	newname.insert(newname.length(), ".replace");
	get_text(text, f_source);
	f_source.close();
	set_text(text, argv);
	f_dest.open(newname, std::fstream::in | std::fstream::out | std::fstream::trunc);
	f_dest << text;
	f_dest.close();
	return (0);
}
