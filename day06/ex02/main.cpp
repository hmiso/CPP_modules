/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmiso <hmiso@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 16:41:32 by hmiso             #+#    #+#             */
/*   Updated: 2021/01/25 16:58:01 by hmiso            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "C.hpp"
#include "B.hpp"

Base * generate(void)
{
	int i = rand() % 3;
	if (i == 0){
		return new A;
	} else if (i == 1){
		return new B;
	} else {
		return new C;
	}
}

void identify_from_pointer(Base * p)
{
	if (dynamic_cast<A*>(p)){
		std::cout << "A" << std::endl;
	} else if (dynamic_cast<B*>(p)){
		std::cout << "B" << std::endl;
	} else if (dynamic_cast<C*>(p)){
		std::cout << "C" << std::endl;
	} else {
		std::cout << "Unkown type" << std::endl;
	}
}

void identify_from_reference( Base & p)
{
	if (dynamic_cast<A*>(&p)){
		std::cout << "A" << std::endl;
	} else if (dynamic_cast<B*>(&p)){
		std::cout << "B" << std::endl;
	} else if (dynamic_cast<C*>(&p)){
		std::cout << "C" << std::endl;
	} else {
		std::cout << "Unkown type" << std::endl;
	}
}

int main()
{
	srand(time(NULL));
	Base *ptr = generate();
	Base *ptr2 = new Base;
	identify_from_pointer(ptr);
	identify_from_reference(*ptr);
	identify_from_pointer(ptr2);
	identify_from_reference(*ptr2);
}