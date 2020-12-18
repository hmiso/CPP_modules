/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmiso <hmiso@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/18 22:36:08 by hmiso             #+#    #+#             */
/*   Updated: 2020/12/18 22:48:00 by hmiso            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
#include <iostream>
#include <iomanip>

class Phone_list{
private:
	std::string 	first_name;
	std::string 	second_name;
	std::string 	nickname;
	std::string 	login;
	std::string 	postal_address;
	std::string 	email_address;
	std::string 	phone_number;
	std::string 	birthday_date;
	std::string 	favorite_meal;
	std::string 	underwear_color;
	std::string 	darkest_secret;

public:
	void 			data_recording_first_name();
	void 			data_recording_second_name();
	void 			data_recording_login();
	void 			data_recording_nickname();
	void 			data_recording_postal_address();
	void 			data_recording_email_address();
	void 			data_recording_phone_number();
	void 			data_recording_birthday_date();
	void 			data_recording_favorite_meal();
	void 			data_recording_underwear_color();
	void 			data_recording_darkest_secret();
	std::string		return_first_name();
	std::string		return_second_name();
	std::string		return_nickname();
	std::string		return_login();
	std::string		return_postal_address();
	std::string		return_email_address();
	std::string		return_phone_number();
	std::string		return_birthday_date();
	std::string		return_favorite_meal();
	std::string		return_underwear_color();
	std::string		return_darkest_secret();
};

#endif