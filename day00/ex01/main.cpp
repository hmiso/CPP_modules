/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmiso <hmiso@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/17 16:12:22 by hmiso             #+#    #+#             */
/*   Updated: 2020/12/18 22:47:28 by hmiso            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

	void 	Phone_list::data_recording_first_name()
	{
		std::cout << "ADD FIRST NAME" << std::endl;
		std::cin >> first_name;
		if (first_name.empty())
			data_recording_first_name();
	}
	void 	Phone_list::data_recording_second_name()
	{
		std::cout << "ADD SECOND NAME" << std::endl;
		std::cin >> second_name;
		if (first_name.empty())
			data_recording_second_name();
	}
	void 	Phone_list::data_recording_login()
	{
		std::cout << "ADD LOGIN" << std::endl;
		std::cin >> login;
		if (login.empty())
			data_recording_login();
	}
	void 	Phone_list::data_recording_nickname()
	{
		std::cout << "ADD NICKNAME" << std::endl;
		std::cin >> nickname;
		if (nickname.empty())
			data_recording_nickname();
	}	
	void 	Phone_list::data_recording_postal_address()
	{
		std::cout << "ADD POATAL ADDRES" << std::endl;
		std::cin >> postal_address;
		if (postal_address.empty())
			data_recording_postal_address();
	}
	void 	Phone_list::data_recording_email_address()
	{
		std::cout << "ADD EMAIL ADDRES" << std::endl;
		std::cin >> email_address;
		if (email_address.empty())
			data_recording_email_address();
	}
	void 	Phone_list::data_recording_phone_number()
	{
		std::cout << "ADD PHONE NAMBER" << std::endl;
		std::cin >> phone_number;
		if (phone_number.empty())
			Phone_list::data_recording_phone_number();
	}
	void 	Phone_list::data_recording_birthday_date()
	{
		std::cout << "ADD BIRTHDAY DATE" << std::endl;
		std::cin >> birthday_date;
		if (birthday_date.empty())
			data_recording_birthday_date();
	}
	void 	Phone_list::data_recording_favorite_meal()
	{
		std::cout << "ADD FAVORITE MEAL" << std::endl;
		std::cin >> favorite_meal;
		if (favorite_meal.empty())
			data_recording_favorite_meal();
	}
	void 	Phone_list::data_recording_underwear_color()
	{
		std::cout << "ADD UNDERWEAR COLOR" << std::endl;
		std::cin >> underwear_color;
		if (underwear_color.empty())
			data_recording_underwear_color();
	}
	void 	Phone_list::data_recording_darkest_secret()
	{
		std::cout << "ADD DARKEST SECRET" << std::endl;
		std::cin >> darkest_secret;
		if (darkest_secret.empty())
			data_recording_darkest_secret();
	}
	std::string	Phone_list::return_first_name()
	{
		return(first_name);
	}
	std::string	Phone_list::return_second_name()
	{
		return(second_name);
	}
	std::string	Phone_list::return_nickname()
	{
		return(nickname);
	}
	std::string	Phone_list::return_login()
	{
		return(login);
	}
	std::string	Phone_list::return_postal_address()
	{
		return(postal_address);
	}
	std::string	Phone_list::return_email_address()
	{
		return(email_address);
	}
	std::string	Phone_list::return_phone_number()
	{
		return(phone_number);
	}
	std::string	Phone_list::return_birthday_date()
	{
		return(birthday_date);
	}
	std::string	Phone_list::return_favorite_meal()
	{
		return(favorite_meal);
	}
	std::string	Phone_list::return_underwear_color()
	{
		return(underwear_color);
	}
	std::string	Phone_list::return_darkest_secret()
	{
		return(darkest_secret);
	}					

void	add_contact(Phone_list *list, int i)
{
	list[i].data_recording_first_name();
	list[i].data_recording_second_name();
	list[i].data_recording_nickname();
	list[i].data_recording_login();
	list[i].data_recording_postal_address();
	list[i].data_recording_email_address();
	list[i].data_recording_phone_number();
	list[i].data_recording_birthday_date();
	list[i].data_recording_favorite_meal();
	list[i].data_recording_underwear_color();
	list[i].data_recording_darkest_secret();
}

std::string	sub_string(std::string str)
{
	if (str.length() > 10)
		return(str.substr(0, 9) + ".");
	else
		return(str);
}

void	previe_contact(Phone_list *list, int i)
{
	int j = 0;
	while ( j < i)
	{
		std::cout << "|" << std::setw(10) << (j + 1) << "|" << std::setw(10) << sub_string(list[j].return_first_name())
		<< "|" << std::setw(10) << sub_string(list[j].return_second_name()) << "|" << std::setw(10) << sub_string(list[j].return_nickname()) <<
		"|" << std::endl;
		j++;
	}
}

void	print_contact(Phone_list *list, int i)
{
	std::cout << "First name:      " << list[i].return_first_name() << std::endl;
	std::cout << "Second name:     " << list[i].return_second_name() << std::endl;
	std::cout << "Nickname:        " << list[i].return_nickname() << std::endl;
	std::cout << "Login:           " << list[i].return_login() << std::endl;
	std::cout << "Postal address:  " << list[i].return_postal_address() << std::endl;
	std::cout << "Email_address:   " << list[i].return_email_address() << std::endl;
	std::cout << "Phone number:    " << list[i].return_phone_number() << std::endl;
	std::cout << "Birthday date:   " << list[i].return_birthday_date() << std::endl;
	std::cout << "Favorite meal:   " << list[i].return_favorite_meal() << std::endl;
	std::cout << "Underwear color: " <<  list[i].return_underwear_color() << std::endl;
	std::cout << "Darkest secret:  " <<  list[i].return_darkest_secret() << std::endl;
}

void	searh_contact(Phone_list *list, int i)
{
	int index;
	std::string buf;
	while(1)
	{
		std::cout << ">";
		std::cin >> buf;
		if (buf.length() > 1)
		{
			std::cout << "Error!!! Enter the contact number from 1 to "<< i << std::endl;
			continue;
		}
		else
		{
			if (buf[0] >= '1' && buf[0] <= '9')
				index = std::stoi(buf);
			else
			{
				std::cout << "Error!!! Enter the contact number from 1 to "<< i << std::endl;
				continue;
			}
		}
		if (index - 1 < i && index - 1 >= 0)
		{
			print_contact(list, index - 1);
			break;
		}
		else
		{
			std::cout << "Error!!! Enter the contact number from 1 to " << i << std::endl;
			continue;
		}
	}
}

int main()
{
	Phone_list book[8];
	std::string comand;
	int i = 0;

	std::cout << "GO" << std::endl;
	while(1)
	{
		std::cout << ">";
		std::cin >> comand;
		if (comand == "ADD")
		{
			if (i > 7)
			{
				std::cout << "Error: book is full!" << std::endl;
				continue;
			}
			add_contact(book, i);
			i++;
		}
		else if (comand == "SEARCH")
		{
			if (i == 0)
			{
				std::cout << "Error: book is empty!" << std::endl;
			}
			else
			{
				previe_contact(book, i);
				searh_contact(book, i);
			}
		}
		else if (comand == "EXIT")
			exit(0);
		else
			std::cout << "I don't understand that you are walking from me!!! Use ADD, SEARCH or EXIT" << std::endl;
	}
	return (0);
}