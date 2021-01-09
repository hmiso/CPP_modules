/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmiso <hmiso@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/09 16:19:27 by hmiso             #+#    #+#             */
/*   Updated: 2021/01/09 16:25:16 by hmiso            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
#define SORCERER_HPP

#include "Victim.hpp"

class Sorcerer{
private:
	std::string name;
	std::string title;
	Sorcerer();
public:
	Sorcerer(std::string name, std::string title);
	Sorcerer(const Sorcerer &ptr);
	Sorcerer &operator = (const Sorcerer &ptr);
	std::string introduce_yourself(void) const;
	void polymorph(Victim const &ptr);
	~Sorcerer();
};

std::ostream &operator<<(std::ostream &stream, const Sorcerer &ptr);

#endif