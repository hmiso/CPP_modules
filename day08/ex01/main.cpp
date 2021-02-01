/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmiso <hmiso@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/31 10:21:50 by hmiso             #+#    #+#             */
/*   Updated: 2021/01/31 13:35:55 by hmiso            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

int main()
{
	Span span = Span(5);
	span.addNumber(15);
	span.addNumber(2);
	span.addNumber(22);
	span.addNumber(33);
	span.addNumber(4);
	try
	{
		span.addNumber(4);
	}
	catch(const std::exception& e)
	{
		std::cout << "Error: overflou array" << std::endl;
	}
	std::cout << span.shortestSpan() << std::endl;
	std::cout << span.longestSpan() << std::endl;

	Span span2 = Span(10001);
	std::vector<int> mas2;
	mas2.resize(10001);
	for (int i = 0; i < 10001; i++){
		mas2[i] = rand() % 100000;
	}
	span2.addNumber(mas2.begin(), mas2.end());
	std::cout << span2.shortestSpan() << std::endl;
	std::cout << span2.longestSpan() << std::endl;
	try
	{
		span2.addNumber(4);
	}
	catch(const std::exception& e)
	{
		std::cout << "Error: overflou array" << std::endl;
	}	
}