/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmiso <hmiso@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/10 18:07:27 by hmiso             #+#    #+#             */
/*   Updated: 2021/01/10 18:36:40 by hmiso            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURSE_HPP
#define MATERIASOURSE_HPP

#include "IMateriaSource.hpp"
#include <iostream>

class MateriaSource : public IMateriaSource{
private:
	AMateria *slots[4];
	int count_slots;
public:
	MateriaSource();
	MateriaSource(MateriaSource const &ptr);
	MateriaSource &operator = (MateriaSource const &ptr);
	void learnMateria(AMateria *ptr);
	AMateria* createMateria(std::string const &type);
	virtual ~MateriaSource();
};

#endif