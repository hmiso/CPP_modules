/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmiso <hmiso@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/31 10:21:42 by hmiso             #+#    #+#             */
/*   Updated: 2021/02/06 17:34:23 by hmiso            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <algorithm>
#include <iostream>
#include <vector>


class Span{
private:
	std::vector<int> mas;
	int n;
	Span(){}
public:
	Span(unsigned int n);
	Span &operator = (Span const &ptr);

	void addNumber(int n);
	void addNumber(std::vector<int>::iterator first, std::vector<int>::iterator last);
	int shortestSpan();
	int longestSpan();
	~Span();
};

#endif