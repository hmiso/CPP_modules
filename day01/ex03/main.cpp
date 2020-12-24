/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmiso <hmiso@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/21 11:15:37 by hmiso             #+#    #+#             */
/*   Updated: 2020/12/22 15:52:27 by hmiso            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

int main()
{
	std::srand(0);
	ZombieHorde *hord;
	hord = new ZombieHorde(2);
	ZombieHorde hord_2(3);
	hord->announce();
	hord_2.announce();
	delete hord;
}