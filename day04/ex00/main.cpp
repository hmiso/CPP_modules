/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmiso <hmiso@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/06 09:49:13 by hmiso             #+#    #+#             */
/*   Updated: 2021/01/06 18:57:13 by hmiso            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>


class Victim{
private:
	std::string name;
	Victim() {name = "";}
public:
	std::string get_name() const 
	{ 
		return name;
	}
	Victim(std::string name)
	{
		std::cout << "Some random victim called " + name + " just appeared!" << std::endl;
		this->name = name;
	}
	void virtual getPolymorphed() const {
		std::cout << name << " has been turned into a cute little sheep!" << std::endl;
	}
	~Victim()
	{
		std::cout << "Victim " + name + " just died for no apparent reason!" << std::endl;
	}
};

class Peon : public Victim {
private:
	std::string name;
public:
	Peon(std::string name) : Victim(name){
		this->name = name;
		std::cout << "Zog zog." << std::endl;
	}
	void getPolymorphed() const {
		std::cout << name << " has been turned into a pink pony!" << std::endl;
	}		
	~Peon(){
		std::cout << "Bleuark..." << std::endl;
	}
};

class Sorcerer{
private:
	std::string name;
	std::string title;
	Sorcerer(){
		name = "";
		title = "";
	}
public:
	Sorcerer(std::string name, std::string title)
	{
		this->name = name;
		this->title = title;
		std::cout << name << ", " << title << ", is born!" << std::endl;
	}
	std::string introduce_yourself(void) const
	{
		return ("I am " + name + ", " + title + ", and I like ponies!");
	}
	void polymorph(Victim const &ptr){
		ptr.getPolymorphed();
	}
	~Sorcerer()
	{
		std::cout << name << ", " << title << ", is dead. Consequences will never be the same!" << std::endl;
	}
};

std::ostream &operator<<(std::ostream &stream, const Sorcerer &ptr)
{
	stream << ptr.introduce_yourself() << std::endl;
	return(stream);
}
std::ostream &operator<<(std::ostream &stream, const Victim &ptr)
{
	stream << "I'm " + ptr.get_name() + " and I like otters!" << std::endl;
	return(stream);
}

int main()
{
	Sorcerer robert("Robert", "the Magnificent");
	Victim jim("Jimmy");
	Peon joe("Joe");
	std::cout << robert << jim << joe;
	robert.polymorph(jim);
	robert.polymorph(joe);
	return 0;
}