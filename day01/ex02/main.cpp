/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmiso <hmiso@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/20 11:54:16 by hmiso             #+#    #+#             */
/*   Updated: 2020/12/20 19:46:52 by hmiso            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"


int main()
{
	srand( time( NULL) );
	ZombieEvent event("test");
	Zombie *ptr;
	ptr = event.randomChump();
	delete ptr;
}