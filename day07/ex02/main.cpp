/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmiso <hmiso@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 12:20:59 by hmiso             #+#    #+#             */
/*   Updated: 2021/01/26 18:17:41 by hmiso            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main()
{
	Array<char> mas(10);
	Array<int> mas2(10);
	Array<std::string>mas3(5);
	Array<std::string> mas4; // empty array
 	int i = 0;
	while (i < 10)
	{
		mas[i] = ('A' + i);
		mas2[i] = i;
		i++;
	}
	i = 0;
	while (i < 10)
	{
		std::cout << mas[i];
		i++;
	}
	i = 0;
	std::cout << std::endl;
	while (i < 10)
	{
		std::cout << mas2[i];
		i++;
	}
	i = 0;
	std::cout << std::endl;
	mas3[0] = "Hello";
	mas3[1] = "this";
	mas3[2] = "beautiful";
	mas3[3] = "world";
	mas3[4] = ":-)";
	while (i < 5)
	{
		std::cout << mas3[i] << " ";
		i++;
	}
	std::cout << std::endl;
	try{
		std::cout << mas3[6]; 
	}
	catch(std::exception & e){
		std::cout << "Bad index" << std::endl;
	}
	mas4 = mas3;
	i = 0;
	while (i < 5)
	{
		std::cout << mas3[i] << " ";
		i++;
	}
	std::cout << std::endl;
	return 0;
}