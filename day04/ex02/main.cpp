/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmiso <hmiso@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/07 13:09:58 by hmiso             #+#    #+#             */
/*   Updated: 2021/01/09 22:58:09 by hmiso            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "AssaultTerminator.hpp"
#include "TacticalMarine.hpp"
#include "Squad.hpp"

// class ISpaceMarine
// {
// public:
// 	virtual ~ISpaceMarine() {}
// 	virtual ISpaceMarine* clone() const = 0;
// 	virtual void battleCry() const = 0;
// 	virtual void rangedAttack() const = 0;
// 	virtual void meleeAttack() const = 0;
// };

// class ISquad
// {
// public:
// 	virtual ~ISquad() {}
// 	virtual int getCount() const = 0;
// 	virtual ISpaceMarine* getUnit(int ptr) const = 0;
// 	virtual int push(ISpaceMarine*) = 0;
// };

// class Squad : public ISquad{
// private:
// 	int count;
// 	ISpaceMarine **squad;
// public:
// 	Squad()
// 	{
// 		count = 0;
// 		squad = NULL;
// 	}
// 	int getCount() const{
// 		return count;
// 	}
// 	ISpaceMarine *getUnit(int i) const {
// 		if (i > count)
// 			return NULL;
// 		else
// 			return squad[i];
// 	}
// 	int push(ISpaceMarine *ptr){
// 		if (!ptr)
// 			return count;
// 		int i = 0;
// 		while(i < count)
// 		{
// 			if(squad[i] == ptr)
// 				return count;
// 			i++;
// 		}
// 		ISpaceMarine **mas_new_sqwad = new ISpaceMarine* [i + 1];
// 		i = 0;
// 		while(i < count)
// 		{
// 			mas_new_sqwad[i] = squad[i];
// 			i++;
// 		}
// 		mas_new_sqwad[i] = ptr;
// 		delete[] squad;
// 		squad = mas_new_sqwad;
// 		count =  i + 1;
// 		return i;
// 	}
// 	~Squad(){
// 		int i = 0;
// 		while(i < count)
// 		{
// 			delete squad[i];
// 			i++;
// 		}
// 	}
// };

// class TacticalMarine : public ISpaceMarine{
// private:
// 	std::string type;
// public:
// 	TacticalMarine(){
// 		type = "TacticalMarine";
// 		std::cout << "Tactical Marine ready for battle!" << std::endl;
// 	}
// 	void battleCry() const{
// 		std::cout << "For the holy PLOT!" << std::endl;
// 	}
// 	void rangedAttack() const{
// 		std::cout << "* attacks with a bolter *" << std::endl;
// 	}
// 	void meleeAttack() const{
// 		std::cout << "* attacks with a chainsword *" << std::endl;
// 	}
// 	ISpaceMarine* clone() const {
// 		TacticalMarine *ptr = new TacticalMarine(*this);
// 		return ptr;
// 	}
// 	~TacticalMarine(){
// 		std::cout << "Aaargh..." << std::endl;
// 	}
// };


// class AssaultTerminator : public ISpaceMarine{
// private:
// 	std::string type;
// public:
// 	AssaultTerminator(){
// 		type = "AssaultTerminator";
// 		std::cout << "* teleports from space *" << std::endl;
// 	}
// 	void battleCry() const{
// 		std::cout << "This code is unclean. PURIFY IT!" << std::endl;
// 	}
// 	void rangedAttack() const{
// 		std::cout << "* does nothing *" << std::endl;
// 	}
// 	void meleeAttack() const{
// 		std::cout << "* attacks with chainfists *" << std::endl;
// 	}
// 	ISpaceMarine* clone() const {
// 		AssaultTerminator *ptr = new AssaultTerminator(*this);
// 		return ptr;
// 	}
// 	~AssaultTerminator(){
// 		std::cout << "I’ll be back..." << std::endl;
// 	}
// };

int main()
{
	ISpaceMarine* bob = new TacticalMarine;
	ISpaceMarine* jim = new AssaultTerminator;
	ISquad* vlc = new Squad;
	vlc->push(bob);
	vlc->push(jim);
	for (int i = 0; i < vlc->getCount(); ++i)
	{
		ISpaceMarine* cur = vlc->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}
	delete vlc;
	return 0;
}