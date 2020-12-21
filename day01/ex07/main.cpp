/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmiso <hmiso@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/21 19:50:14 by hmiso             #+#    #+#             */
/*   Updated: 2020/12/21 23:46:37 by hmiso            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

int main(int argc, char **argv)
{
	std::ifstream in;
	std::ofstream out;
	std::string str = argv[1] + ".REPLASE";
	std::string str1 = "Hello";
	std::string str2 = "world";
	if (argc != 4)
	{
		std::cout << "Wrong argument!" << std::endl;
		exit(0);
	}
	out.open(str);
	in.open(argv[1]);
	if (!in.is_open() || !out.is_open())
	{
		std::cout << "Bad file!" << std::endl;
		exit(0);
	}

	str1 = argv[2];
	str2 = argv[3];
	while(str.find(str1) != -1)
		str.replace(str.find(str1), str2.size(), str2);
	std::cout << str << std::endl;
}