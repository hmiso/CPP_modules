/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmiso <hmiso@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/30 10:54:55 by hmiso             #+#    #+#             */
/*   Updated: 2021/01/02 09:42:46 by hmiso            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
	ScavTrap miki("Miki");
	ScavTrap ruck("Ruck");
	miki.challengeNewcomer();
	miki.challengeNewcomer();
	miki.challengeNewcomer();
	miki.challengeNewcomer();
	miki.recovery_ep(10);
	miki.recovery_ep(10);
	miki.recovery_ep(100);
	miki.challengeNewcomer();
}