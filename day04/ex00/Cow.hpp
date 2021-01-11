/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cow.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmiso <hmiso@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/11 13:34:41 by hmiso             #+#    #+#             */
/*   Updated: 2021/01/11 13:35:32 by hmiso            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef COW_HPP
#define COW_HPP

#include "Victim.hpp"

class Cow : public Victim {
private:
	std::string name;
public:
	Cow(std::string name);
	void getPolymorphed() const;
	virtual ~Cow();
};

#endif