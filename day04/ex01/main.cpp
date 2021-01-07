/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmiso <hmiso@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/06 19:31:47 by hmiso             #+#    #+#             */
/*   Updated: 2021/01/07 13:04:17 by hmiso            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class AWeapon{
private:
	std::string name;
	int damage;
	int apcost;
public:
	AWeapon(std::string const &name, int apcost, int damage){
		this->name = name;
		this->apcost = apcost;
		this->damage = damage;
	}
	std::string getName() const{
		return name;
	}
	int getAPCost() const{
		return apcost;
	}
	int getDamage() const{
		return damage;
	}
	virtual void attack() = 0;
	virtual ~AWeapon(){} 
};

class PlasmaRifle : public AWeapon{
public:
	PlasmaRifle() : AWeapon("Plasma Rifle", 5, 21){};
	void attack()
	{
		std::cout << "* piouuu piouuu piouuu *" << std::endl;
	}
};

class PowerFist : public AWeapon{
public:
	PowerFist() : AWeapon("Power Fist", 8, 50){};
	void attack()
	{
		std::cout << "* pschhh... SBAM! *" << std::endl;
	}
};

class Enemy{
private:
	int hp;
	std::string type;
public:
	Enemy(int hp, std::string type){
		this->hp = hp;
		this->type = type;
	}
	std::string virtual getType() const{
		return type;
	}
	int getHP() const{
		return hp;
	}
	void setHP(int hp) {
		this->hp = hp;
	}
	virtual ~Enemy() {}
	virtual void takeDamage(int damage){
		if (damage > 0)
		{
			hp = hp - damage;
		}
	}
};

class SuperMutant : public Enemy{
public:
	SuperMutant() : Enemy(170, "Super Mutant")
	{
		std::cout << "Gaaah. Me want smash heads!" << std::endl;
	}
	~SuperMutant(){
		std::cout << "Aaargh..." << std::endl;
	}
	void takeDamage(int damage) override{
		if (damage > 0)
		{
			if(getHP() > 0)
			{
				setHP(getHP() - (damage - 3));
			}
		}
	}
};

class RadScorpion : public Enemy{
public:
	RadScorpion() : Enemy(80, "RadScorpion")
	{
		std::cout << "* click click click *" << std::endl;
	}
	~RadScorpion(){
		std::cout << "* SPROTCH *" << std::endl;
	}
	void takeDamage(int damage) override{
		if (damage > 0)
		{
			if(getHP() > 0)
			{
				setHP(getHP() - (damage - 3));
			}
		}
	}
};

class Character{
private:
	std::string name;
	int AP;
	AWeapon *weapon;
public:
	Character(std::string name){
		this->name = name;
		AP = 40;
		weapon = nullptr;
	}
	void recoverAP()
	{
		if (AP < 40)
		{
			if (AP + 10 < 40)
				AP += 10;
			else
				AP = 40;	
		}
		std::cout << "Recover AP. " << name << "has AP: " << AP << std::endl;
	}
	std::string get_name() const
	{
		return name;
	}
	int get_ap() const{
		return AP;
	}
	std::string get_name_weapon() const{
		if(weapon)
			return weapon->getName();
		else
			return NULL;	
	}
	AWeapon *get_weapon() const
	{
		return weapon;
	}
	void equip(AWeapon *ptr)
	{
		weapon = ptr;
	}
	void attack(Enemy *ptr)
	{
		if (weapon && ((AP - weapon->getAPCost() > 0)))
		{
			AP -= weapon->getAPCost();
			std::cout << name << " attacks " << ptr->getType() << " with a " << weapon->getName() << std::endl;
			weapon->attack();
			ptr->takeDamage(weapon->getDamage());
			if(ptr->getHP() <= 0)
			{
				ptr->~Enemy();
			}
		}
		if (AP - weapon->getAPCost() < 0)
		{
			std::cout << "Not enough ap to attack!" << name << "has AP: " << AP << std::endl;
		}
	}
};

std::ostream &operator<<(std::ostream &stream, const Character &ptr)
{
	if(ptr.get_weapon())
		std::cout << ptr.get_name() << " has " << ptr.get_ap() << " AP and wields a " << ptr.get_name_weapon() << std::endl;
	else
		std::cout << ptr.get_name() << " has " << ptr.get_ap() << " AP and is unarmed" << std::endl;
	return(stream);
}

int main()
{
	Character* me = new Character("me");
	std::cout << *me;
	Enemy* b = new RadScorpion();
	AWeapon* pr = new PlasmaRifle();
	AWeapon* pf = new PowerFist();
	me->equip(pr);
	std::cout << *me;
	me->equip(pf);
	me->attack(b);
	std::cout << *me;
	me->equip(pr);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;
	return 0;
}