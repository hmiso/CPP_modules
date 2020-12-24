/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmiso <hmiso@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/21 19:50:14 by hmiso             #+#    #+#             */
/*   Updated: 2020/12/22 17:27:56 by hmiso            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Wrong argument!" << std::endl;
		exit(0);
	}
	std::ifstream in;
	std::ofstream out;
	std::string file = argv[1];
	std::string str1 = argv[2];
	std::string str2 = argv[3];
	std::string buf;
	if (!str1.length() || !str2.length() || !file.length())
	{
		std::cout << "Bad argument!" << std::endl;
		exit(0);
	}
	file = file + ".REPLASE";
	in.open(argv[1]);
	if (!in.is_open())
	{
		std::cout << "Bad file!" << std::endl;
		exit(0);
	}
	out.open(file);
	if (!out.is_open())
	{
		std::cout << "Bad file!" << std::endl;
		exit(0);
	}
	while (getline(in, buf))
	{
		while(buf.find(str1) != -1)
			buf.replace(buf.find(str1), str2.size(), str2);
		if (in.eof())
			out << buf;
		else
			out << buf << std::endl;
	}
}