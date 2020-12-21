/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmiso <hmiso@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/21 13:32:05 by hmiso             #+#    #+#             */
/*   Updated: 2020/12/21 17:27:48 by hmiso            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <sstream>

class Brain{
private:
	std::string addres;
public:
	Brain() { };	
	~Brain() { };
	std::string identify() {
		std::stringstream test;
		test << this;
		return test.str();
	};
};

class Human{
private:
	Brain _brain;
public:
	Brain &getBrain(){
		return _brain;
	}
	std::string identify(){
		return _brain.identify();
	};
};

int main()
{
	Human bob;
	std::cout << bob.identify() << std::endl;
	std::cout << bob.getBrain().identify() << std::endl;
}