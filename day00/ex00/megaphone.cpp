/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmiso <hmiso@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/16 17:36:41 by hmiso             #+#    #+#             */
/*   Updated: 2020/12/19 09:28:54 by hmiso            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char **argv)
{
	int i = 1;
	int j = 0;
	char *str;
	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
	}
	else
	{
		while (argv[i] != NULL)
		{
			while(argv[i][j] != '\0')
			{
				std::cout << (char)std::toupper(argv[i][j]);
				j++;
			}
			j = 0;
			std::cout << " ";
			i++;
		}
		std::cout << "\n";
	}
	return (0);
}