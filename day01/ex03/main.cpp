/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmiso <hmiso@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/21 11:15:37 by hmiso             #+#    #+#             */
/*   Updated: 2020/12/21 12:11:56 by hmiso            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Zombie{
private:
	std::string _name;
	std::string _type;
public:
	Zombie() {};
	Zombie(std::string name, std::string type) {
		_name = name;
		_type = type;
	}
	~Zombie(){ };
	void announce(){
		std::cout << _name << " " << _type << " " << "Braiiiiiiinnnssss..." << std::endl;
	}
};

class ZombieHorde{
private:
	int _n;
	Zombie *_ptr;
public:
	ZombieHorde() {};	
	ZombieHorde(int n) {
		int i = 0;
		_n = n;
		std::string mas[5] = {"Zombi_Bob", "Zombi_Jack", "Zombi_Ervin", "Zombi_Lass", "Zombi_Chack"};
		_ptr = new Zombie[n];
		while(i < n)
		{
			_ptr[i] = Zombie(mas[std::rand() % 5], "School21");
			i++;
		}
	};
	~ZombieHorde(){
		delete[] _ptr;
	};
	void	announce(){
		int i = 0;
		while(i < _n)
		{
			_ptr[i].announce();
			i++;
		}
	};
};

int main()
{
	int i;
	std::srand(i);
	ZombieHorde *hord;
	hord = new ZombieHorde(2);
	ZombieHorde hord_2(3);
	hord->announce();
	hord_2.announce();
	delete hord;
	getchar();
}