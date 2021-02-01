/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmiso <hmiso@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/31 10:21:46 by hmiso             #+#    #+#             */
/*   Updated: 2021/01/31 13:10:05 by hmiso            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

Span::Span(unsigned int n){
	this->n = 0;
	this->mas.resize(n);
}

void Span::addNumber(int n){
	if (this->mas.capacity() > this->n) {
		mas[this->n] = n;
		this->n++;
	} else {
		throw std::exception();
	}
}

void Span::addNumber(std::vector<int>::iterator first, std::vector<int>::iterator last){
	while(first != last){
		if (this->mas.capacity() > this->n){
			mas[this->n] = (*first);
			this->n++;
			first++;
		}
		else {
			throw std::exception();
		}
	}
}

int Span::shortestSpan(){
	if (mas.size() > 1){
		std::sort(mas.rbegin(), mas.rend(), std::greater<int>());
		return mas[1] - mas[0];
	} else {
		throw std::exception();
	}
}

int Span::longestSpan(){
	if (mas.size() > 1){
		std::sort(mas.rbegin(), mas.rend(), std::greater<int>());
		return mas[mas.size() - 1] - mas[0];
	} else {
		throw std::exception();
	}
}

Span::~Span(){
	mas.clear();
}