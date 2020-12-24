/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmiso <hmiso@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/21 12:59:36 by hmiso             #+#    #+#             */
/*   Updated: 2020/12/22 15:52:50 by hmiso            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
	std::string str =  "HI THIS IS BRAIN";
	std::string *ptr = &str;
	std::string &lnk = str;

	std::cout << *ptr << std::endl;
	std::cout << lnk << std::endl;
}