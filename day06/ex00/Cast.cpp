/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cast.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmiso <hmiso@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 05:48:44 by hmiso             #+#    #+#             */
/*   Updated: 2021/01/25 17:17:52 by hmiso            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cast.hpp"

Cast::Cast(){
	valueChar = 0;
	valueInt = 0;
	valueDouble = 0;
	valueFloat = 0;
	sacsesConvertToChar = true;
	sacsesConvertToInt = true;
	sacsesConvertToDouble = true;
	sacsesConvertToFloat = true;
}

Cast::~Cast(){}

Cast::Cast(Cast const &ptr){
	(void)ptr;
}

Cast &Cast::operator=(Cast const &ptr){
	(void)ptr;
	return(*this);
}

bool Cast::convertToInt(long int value){
	if (value > std::numeric_limits<int>::max() || value < std::numeric_limits<int>::min()){
		return false;
	}
	this->valueInt = static_cast<int>(value);
	return true;
}
bool Cast::convertToChar(long int value){
	if (value > std::numeric_limits<char>::max() || value < std::numeric_limits<char>::min()){
		return false;
	}
	this->valueChar = static_cast<char>(value);
	return true;

}
bool Cast::convertToDouble(long value, double value2){
	if (value > DBL_MAX || value <  DBL_MIN){
		return false;
	}
	this->valueDouble = static_cast<double>(value) + value2;
	return true;
}
bool Cast::convertToFloat(long int value, double value2){
	if (value > FLT_MAX || value < FLT_MIN){
		return false;
	}
	this->valueFloat = static_cast<float>(value) + value2;
	return true;
}
void Cast::convertarg(char *ptr){
	char *end;
	char *end2;
	std::string convertValue2;
	char *ptr2;
	double value2 = 0;
	long int delemiter = 1;
	ptr2 = strtok(ptr, ".");
	ptr2 = strtok(NULL, ".");
	if (ptr2){
		convertValue2 = ptr2;
		for (int i = 0; i < (int)convertValue2.length(); i++){
			if (isdigit(convertValue2[i]))
				delemiter *= 10;
		}
		value2 = strtod(ptr2, &end2) / delemiter;		
	}
	long long int value = strtod(ptr, &end);
	if (!convertToChar(value) || strlen(end) >= 2 || (strlen(end) == 1 && end[0] != 'f') || strlen(end2) >= 2 || (strlen(end2) == 1 && end2[0] != 'f')){
		this->sacsesConvertToChar = false;
	}
	if (!convertToInt(value) || strlen(end) >= 2 || (strlen(end) == 1 && end[0] != 'f') || strlen(end2) >= 2 || (strlen(end2) == 1 && end2[0] != 'f')){
		this->sacsesConvertToInt = false;		
	}
	if (!convertToDouble(value, value2) || strlen(end) >= 2 || (strlen(end) == 1 && end[0] != 'f') || strlen(end2) >= 2 || (strlen(end2) == 1 && end2[0] != 'f')){
		this->sacsesConvertToDouble = false;		
	}
	if (!convertToFloat(value, value2) || strlen(end) >= 2 || (strlen(end) == 1 && end[0] != 'f') || strlen(end2) >= 2 || (strlen(end2) == 1 && end2[0] != 'f')){
		this->sacsesConvertToFloat = false;		
	}
}
