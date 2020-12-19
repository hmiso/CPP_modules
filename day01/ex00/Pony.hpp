/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmiso <hmiso@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/19 16:48:12 by hmiso             #+#    #+#             */
/*   Updated: 2020/12/19 17:00:50 by hmiso            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
#include <iostream>

class Pony{
public:
	Pony(std::string name);
	~Pony();
	void pony_voice();
private:
	std::string name;
};

#endif