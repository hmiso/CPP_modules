/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmiso <hmiso@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/09 15:32:05 by hmiso             #+#    #+#             */
/*   Updated: 2021/01/10 18:56:39 by hmiso            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
#define VICTIM_HPP

#include <iostream>

class Victim{
private:
	std::string name;
	Victim();
public:

	std::string get_name() const;
	Victim(std::string name);
	Victim(const Victim& ptr);
	Victim &operator = (const Victim &ptr);
	void virtual getPolymorphed() const;
	virtual ~Victim();
};

std::ostream &operator<<(std::ostream &stream, const Victim &ptr);

#endif