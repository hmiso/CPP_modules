/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmiso <hmiso@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/08 17:42:58 by hmiso             #+#    #+#             */
/*   Updated: 2021/01/11 18:07:35 by hmiso            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "ICharacter.hpp"
#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"


int	main() {
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
	std::cout << std::endl << "MORE TESTING!!!" << std::endl;
	MateriaSource source;
	source.learnMateria(new Ice());
	source.learnMateria(new Cure());
	source.learnMateria(source.createMateria("ice"));
	source.learnMateria(source.createMateria("cure"));
	source.learnMateria(new Ice()); //creates a leak in the main
	Character he = Character("he");
	Character they(he);
	they.equip(source.createMateria("ice"));
	they.equip(source.createMateria("ice"));
	they.equip(source.createMateria("cure"));
	they.equip(source.createMateria("cure"));
	they.equip(source.createMateria("cure")); //creates a leak in the main
	they.use(-1, he);
	they.use(0, he);
	they.use(1, he);
	they.use(2, he);
	they.use(3, he);
	they.use(4, he);
	return 0;
}
