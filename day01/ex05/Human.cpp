/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmiso <hmiso@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/22 16:15:21 by hmiso             #+#    #+#             */
/*   Updated: 2020/12/22 16:20:40 by hmiso            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human() {};

Human::~Human() {};

Brain &Human::getBrain()
{
	return _brain;
}

std::string Human::identify()
{
	return _brain.identify();
}