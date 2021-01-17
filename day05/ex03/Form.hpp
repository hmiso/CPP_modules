/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmiso <hmiso@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/14 07:52:01 by hmiso             #+#    #+#             */
/*   Updated: 2021/01/17 17:46:39 by hmiso            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"
class Bureaucrat;
class Form{
private:
	std::string name;
	int the_desired_rank_for_the_signature;
	int the_desired_rank_for_the_execute;
	bool is_signed;
	Form();
public:
	Form(std::string name, int rank_for_the_signature, int rank_for_the_execute);
	Form(Form const &ptr);
	Form &operator = (Form const &ptr);
	std::string get_name() const;
	int get_grade_singature() const;
	int get_grede_exucte() const;
	bool get_is_signed() const;
	void beSigned(Bureaucrat &ptr);
	virtual void execute(Bureaucrat const & executor) const;
	
	class GradeTooHighException : public std::exception{
		public:
		const char* what() const throw();
	};
	class GradeTooLowException : public std::exception{
		public:
		const char* what() const throw();
	};
	class GradeTooSignedException : public std::exception{
		public:
		const char* what() const throw();
	};	
	virtual ~Form(){};
};

std::ostream &operator<<(std::ostream &output, Form const &ptr);

#endif