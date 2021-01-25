/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmiso <hmiso@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 15:26:21 by hmiso             #+#    #+#             */
/*   Updated: 2021/01/25 16:24:03 by hmiso            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <cstdlib>

struct Data
{
	std::string s1;
	int n;
	std::string s2;
};


void * serialize(void)
{
	std::string str = "0123456789abcdefghijklmopqrstuvxyzABCDEFGHIJKLMOPQRSTUVXYZ";
	char *ptr = new char[20];
	int i = 0;
	while (i < 8)
	{
		reinterpret_cast<char*>(ptr)[i] = str[rand() % 58];
		i++;
	}
	*reinterpret_cast<int*>(&(ptr)[8]) = rand();
	i += 4;
	while (i < 20)
	{
		reinterpret_cast<char*>(ptr)[i] = str[rand() % 58];
		i++;
	}
	return ptr;
}

Data * deserialize(void * raw)
{
	Data *data = new  Data;
	
    data->s1 = std::string(static_cast<char*>(raw), 8);
	data->n = (reinterpret_cast<int*>(raw))[2];
    data->s2 = std::string(static_cast<char*>(raw) + 12, 8);

	return data;
}
int main()
{
	srand(time(NULL));
	void *ptr = serialize();
	Data *ptr2 = deserialize(ptr);
	std::cout << ptr2->s1 << std::endl;
	std::cout << ptr2->n << std::endl;
	std::cout << ptr2->s2 << std::endl;
}