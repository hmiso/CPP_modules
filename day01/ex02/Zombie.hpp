/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmiso <hmiso@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/19 20:16:54 by hmiso             #+#    #+#             */
/*   Updated: 2020/12/20 18:40:06 by hmiso            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBI_HPP

#include <iostream>

class Zombie{
public:
	Zombie();
	Zombie(std::string name, std::string type);
	~Zombie();
	void announce();
	void set_type(std::string type);
private:
	std::string name;
	std::string type;
};

#endif