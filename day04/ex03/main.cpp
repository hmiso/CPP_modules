/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmiso <hmiso@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/08 17:42:58 by hmiso             #+#    #+#             */
/*   Updated: 2021/01/10 18:29:58 by hmiso            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "ICharacter.hpp"
#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"

// class Character : public ICharacter{
// private:
// 	std::string name;
// 	AMateria *slots[4];
// 	int count_clots;
// public:
// 	Character(std::string name){
// 		this->name = name;
// 		int i = 0;
// 		while(i < 4)
// 		{
// 			slots[i] = NULL;
// 			i++;
// 		}
// 	}
// 	std::string const & getName() const {
// 		return name;
// 	}
// 	void equip(AMateria *m){
// 		if( count_clots < 4)
// 		{
// 			slots[count_clots] = m;
// 			count_clots++;
// 		}
// 	}
// 	void unequip(int idx){
// 		if (idx >= 0 && idx <= count_clots)
// 			slots[idx] = NULL;
// 	}
// 	void use(int idx, ICharacter& target)
// 	{
// 		if (idx >= 0 && idx < count_clots && slots[idx])
// 			slots[idx]->use(target);
// 	}
// 	~Character(){
// 		int i = 0;
// 		while(i < 4)
// 		{
// 			if (slots[i] != NULL)
// 				delete slots[i];
// 			i++;	
// 		}
// 	}
// };

// class IMateriaSource
// {
// 	public:
// 	virtual ~IMateriaSource() {}
// 	virtual void learnMateria(AMateria *ptr) = 0;
// 	virtual AMateria* createMateria(std::string const & type) = 0;
// };

// class MateriaSource : public IMateriaSource{
// private:
// 	AMateria *slots[4];
// 	int count_slots;
// public:
// 	void learnMateria(AMateria *ptr){
// 		if (ptr && count_slots < 4)
// 		{
// 			slots[count_slots] = ptr->clone();
// 			count_slots++;
// 		}
// 	}
// 	AMateria* createMateria(std::string const &type){
// 		int i = 0;
// 		if (count_slots != 0)
// 		{
// 			while(i < count_slots)
// 			{
// 				if(slots[i]->getType() == type)
// 				{
// 					return slots[i]->clone();
// 				}
// 			i++;
// 			}
// 		}
// 		return NULL;
// 	}
// };

// class Ice : public AMateria{
// public:
// 	Ice() : AMateria("ice") {}

// 	void use(ICharacter& target){
// 		AMateria::use(target);
// 		std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
// 	}

// 	AMateria* clone() const {
// 		return new Ice();
// 	}
// };

// class Cure : public AMateria{
// public:
// 	Cure() : AMateria("cure") {}

// 	void use(ICharacter& target){
// 		AMateria::use(target);
// 		std::cout << "* heals " << target.getName() <<  "’s wounds *" << std::endl;
// 	}
// 	AMateria* clone() const {
// 		return new Cure();
// 	}
// };

int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	delete bob;
	delete me;
	delete src;
	return 0;
}