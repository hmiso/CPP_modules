/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmiso <hmiso@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 10:02:13 by hmiso             #+#    #+#             */
/*   Updated: 2021/01/13 09:37:58 by hmiso            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include "iostream"

class Bureaucrat{
private:
	std::string name;
	int grade;
	Bureaucrat();
public:
	Bureaucrat(std::string name, int grade);
	std::string getName();
	int getGrade();
	void upGrade();
	void lowGrade();
	
	class GradeTooHighException : public std::exception{
		public:
		const char* what() const throw();
	};
	class GradeTooLowException : public std::exception{
		public:
		const char* what() const throw();
	};
	~Bureaucrat(){}
};

#endif