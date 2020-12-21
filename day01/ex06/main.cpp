/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmiso <hmiso@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/21 17:43:04 by hmiso             #+#    #+#             */
/*   Updated: 2020/12/21 19:18:34 by hmiso            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Weapon{
private:
	std::string _type;
public:
	Weapon(){};
	Weapon(std::string type) {
		_type = type;
	};
	std::string& getType(){
		return this->_type;
	};
	void	setType(std::string type){
		this->_type = type;
	};
};

class HumanA{
private:
	std::string _name;
	Weapon *_weapon;
public:
	HumanA(std::string name, Weapon& weapon){
		_weapon = &weapon;
		_name = name;
	}
	void attack(){
		std::cout << _name << " attacks with his " << _weapon->getType() << std::endl;
	};
};

class HumanB{
private:
	std::string _name;
	Weapon *_weapon;
public:
	HumanB(std::string name){
		_name = name;
	}
	void setWeapon(Weapon& weapon){
		_weapon = &weapon;
	};
	void attack(){
		std::cout << _name << " attacks with his " << _weapon->getType() << std::endl;
	};
};

int main()
{
	{
		Weapon club = Weapon("crude spiked club");
		HumanA bob("Bob", club);
		bob.attack();
		club.setType("some other type of club");
		bob.attack();
	}
	{
		Weapon club = Weapon("crude spiked club");
		HumanB jim("Jim");
		jim.setWeapon(club);
		jim.attack();
		club.setType("some other type of club");
		jim.attack();
	}
}