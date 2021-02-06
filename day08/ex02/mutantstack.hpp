/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmiso <hmiso@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/01 07:51:53 by hmiso             #+#    #+#             */
/*   Updated: 2021/02/06 17:23:06 by hmiso            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <algorithm>
#include <iostream>
#include <stack>
#include <list>
#include <iterator>

//https://ru.cppreference.com/w/cpp/container/deque
//https://ru.cppreference.com/w/cpp/container/stack

template <typename T>
class MutantStack : public std::stack<T>
{
public:
        typedef typename std::stack<T>::container_type::iterator iterator;
        typedef typename std::stack<T>::container_type::const_iterator const_iterator;
        typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
        typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;

        MutantStack(){};
        virtual ~MutantStack() {};
        MutantStack(const MutantStack &ptr)
        {
            *this = ptr;
        };

        MutantStack &operator=(const MutantStack &ptr)
        {
	        *this = ptr;
	        return(*this);
        };	

        iterator begin()
        {
            return (std::stack<T>::c.begin()); 
        }

        const_iterator begin() const
        {
            return (std::stack<T>::c.begin());
        }

        iterator end()
        {
            return (std::stack<T>::c.end());
        }

        const_iterator end() const
        {
            return (std::stack<T>::c.end());
        }

        reverse_iterator rbegin()
        {
            return (std::stack<T>::c.rbegin());
        }

        const_reverse_iterator rbegin() const
        {
            return (std::stack<T>::c.rbegin());
        }

        reverse_iterator rend()
        {
            return (std::stack<T>::c.rend());
        }

        const_reverse_iterator rend() const 
        {
            return (std::stack<T>::c.rend());
        } 
};
#endif