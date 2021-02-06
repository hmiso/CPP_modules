/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmiso <hmiso@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/01 07:59:26 by hmiso             #+#    #+#             */
/*   Updated: 2021/02/06 17:40:10 by hmiso            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"

int main()
{
	std::cout << "************ Test **************" << std::endl;
	MutantStack<int> mstack;
	std::list<int> mlist;

	std::stack<int> test;


	mstack.push(5);
	mstack.push(17);
	
	mlist.push_back(5);
	mlist.push_back(17);
	
	std::cout << mstack.top() << "     |    " << mlist.back() << std::endl;
	
	mstack.pop();
	mlist.pop_back();

	std::cout << mstack.size() << "      |    " << mlist.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);

	mlist.push_back(3);
	mlist.push_back(5);
	mlist.push_back(737);
	mlist.push_back(0);

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	
	std::list<int>::iterator lit = mlist.begin();
	std::list<int>::iterator lite = mlist.end();

	++it;
	--it;

	++lit;
	--lit;

	while (it != ite && lit != lite)
	{
		if (*it != 737)
			std::cout << *it << "      |    " << *lit << std::endl;
		else
			std::cout << *it << "    |    " << *lit << std::endl;
		++it;
		++lit;
	}
	std::stack<int> s(mstack);
	std::cout << "************ END subject test ************" << std::endl;
	MutantStack<int>::reverse_iterator rit = mstack.rbegin();
	MutantStack<int>::reverse_iterator rite = mstack.rend();

	while (rit != rite)
	{
		std::cout << *rit << std::endl;
		++rit;
	}

	std::cout << "************ END ***********************" << std::endl;

	return 0;
}