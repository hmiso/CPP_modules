/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmiso <hmiso@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/20 11:54:16 by hmiso             #+#    #+#             */
/*   Updated: 2020/12/21 12:08:31 by hmiso            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Zombie{
private:
	std::string _name;
	std::string _type;
public:

 Zombie();
 Zombie(std::string name, std::string type) {
	_name = name;
	_type = type;
 }
 ~Zombie(){
	std::cout << _name << " " << _type << " " << "I die" << std::endl;
 }
 void announce(){
	std::cout << _name << " " << _type << " " << "Braiiiiiiinnnssss..." << std::endl;
 }
};

class ZombieEvent{
private:
	std::string _type;
public:
	ZombieEvent() { };
	void setZombieType(std::string type){
		_type = type;
 	}
 	Zombie* newZombie(std::string name) {
		Zombie *ptr;
		ptr = new Zombie(name, _type);
		return(ptr);
	}
	Zombie* randomChump(){
		Zombie *ptr;
		std::string mas[5] = {"Zombi_Bob", "Zombi_Jack", "Zombi_Ervin", "Zombi_Lass", "Zombi_Chack",};
		ptr = newZombie(mas[std::rand() % 5]);
		ptr->announce();
		return ptr;
 }
	~ZombieEvent() {};
};

int main()
{
	Zombie *ptr;
	ZombieEvent event;

	std::srand(3);
	event.setZombieType("test");
	ptr = event.randomChump();
	delete ptr;
	ptr = event.randomChump();
	delete ptr;
	ptr = event.randomChump();
	delete ptr;
	event.setZombieType("Komunist");
	ptr = event.newZombie("Wzey");
	ptr->announce();
	delete ptr;
}