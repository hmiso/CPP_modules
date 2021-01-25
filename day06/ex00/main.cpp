/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmiso <hmiso@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 05:48:59 by hmiso             #+#    #+#             */
/*   Updated: 2021/01/25 18:36:18 by hmiso            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cast.hpp"


int main(int argc, char **argv)
{
	if (argc != 2){
		std::cout << "Error! Bad argument" << std::endl;
		return 0;
	}

	std::string argvs = argv[1];
	if (argvs == "nan" || argvs == "nanf" || argvs == "-inff" || argvs == "+inff" || argvs == "+inf" || argvs == "-inf"){
		std::cout << "char: " << "impossible" << std::endl;
		std::cout << "int: "  << "impossible" << std::endl;
		if (argvs == "nan" || argvs == "+inf" || argvs == "-inf"){
			std::cout << "float: " << argvs << "f" << std::endl;
		} else {
			std::cout << "float: " << argvs << std::endl;
		}
		if (argvs == "nanf" || argvs == "+inff" || argvs == "-inff"){
			argvs.resize(argvs.length() - 1);
			std::cout << "double: " << argvs << std::endl; 
		} else {
			std::cout << "double: " << argvs << std::endl;
		}
		return 0;
	}
	Cast ptr = Cast();
	ptr.convertarg(argv[1]);
	if (ptr.sacsesConvertToChar)
	{
		if (isprint(ptr.valueChar)){
			std::cout << "char: " << "'" << ptr.valueChar << "'" << std::endl;		
		} else {
			std::cout << "char: " << "Non displayable" << std::endl;
		}
	}
	else
		std::cout << "char: " << "impossible" << std::endl;
	if (ptr.sacsesConvertToInt)
		std::cout << "int: " << ptr.valueInt << std::endl;
	else
		std::cout << "float: " << "impossible" << std::endl;
	if (ptr.sacsesConvertToFloat)
		std::cout  << "float: " << std::fixed << std::setprecision(1) << ptr.valueFloat << "f" << std::endl;
	else
		std::cout << "float: " << "impossible" << std::endl;
	if (ptr.sacsesConvertToDouble)
		std::cout << "double: " << std::fixed << std::setprecision(1) << ptr.valueDouble << std::endl;
	else
		std::cout << "double: " << "impossible" << std::endl;

}