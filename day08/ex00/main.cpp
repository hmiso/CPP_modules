/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmiso <hmiso@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/27 10:10:25 by hmiso             #+#    #+#             */
/*   Updated: 2021/01/27 10:44:02 by hmiso            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
	std::vector<int> int_vector = {1, 2, 3, 4, 5};
	try{
		std::cout << *easyfind(int_vector, 6)  << std::endl;
	}
	catch (std::exception & e){
		std::cout << "Value not found!" << std::endl;
	}
	int_vector.push_back(6);
	try{
		std::cout << *easyfind(int_vector, 6)  << std::endl;
	}
	catch (std::exception & e){
		std::cout << "Value not found!" << std::endl;
	}	
}