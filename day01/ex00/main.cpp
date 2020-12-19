/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmiso <hmiso@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/19 17:31:39 by hmiso             #+#    #+#             */
/*   Updated: 2020/12/19 17:52:22 by hmiso            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void ponyOnTheHeap()
{
	Pony p1("Pony on the heap");
	p1.pony_voice();
}

void ponyOnTheStack()
{
	Pony *p2;
	p2 =  new Pony("Pony on the stack");
	p2->pony_voice();
	delete p2;
}

int main()
{
	ponyOnTheStack();
	ponyOnTheHeap();
}