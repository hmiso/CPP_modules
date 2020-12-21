/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmiso <hmiso@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/21 19:50:14 by hmiso             #+#    #+#             */
/*   Updated: 2020/12/21 20:17:15 by hmiso            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int main(int argc, char **argv)
{
	std::ifstream in;
	std::ofstream out;
	if (argc != 4)
	{
		std::cout << "Wrong argument!" << std::endl;
		exit(0);
	}
	out.open("test.replace");
	in.open(argv[1]);
	if (!in.is_open() || !out.is_open())
	{
		std::cout << "Bad file!" << std::endl;
		exit(0);
	}
	out << "Good" << std::endl;
}