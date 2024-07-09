/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niklasburchhardt <niklasburchhardt@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 21:52:27 by niklasburch       #+#    #+#             */
/*   Updated: 2024/07/09 08:17:45 by niklasburch      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void Contact::set_first_name(std::string first_name)
{
	_first_name = first_name;
}

void Contact::set_last_name(std::string last_name)
{
	_last_name = last_name;
}

void Contact::set_nickname(std::string nickname)
{
	_nickname = nickname;
}

void Contact::set_phone(std::string phone)
{
	_phone = phone;
}

void Contact::set_darkest_secret(std::string darkest_secret)
{
	_darkest_secret = darkest_secret;
}

void	Contact::display_names(int index)
{
	std::cout << "|" << std::setfill (' ') << std::setw (10) << index;
	if (_first_name.size() <= 10)
		std::cout << "|" << std::setfill (' ') << std::setw (10) << _first_name;
	else
		std::cout << "|" << _first_name.substr(0, 9) << ".";
	if (_last_name.size() <= 10)
		std::cout << "|" << std::setfill (' ') << std::setw (10) << _last_name;
	else
		std::cout << "|" << _last_name.substr(0, 9) << ".";
	if (_nickname.size() <= 10)
		std::cout << "|" << std::setfill (' ') << std::setw (10) << _nickname << "|" << std::endl;
	else
		std::cout << "|" << _nickname.substr(0, 9) << "." << "|" << std::endl;
}

void	Contact::display_details()
{
	std::cout << "First name: " << _first_name << std::endl;
	std::cout << "Last name: " << _last_name << std::endl;
	std::cout << "Nickname: " << _nickname << std::endl;
	std::cout << "Phone number: " << _phone << std::endl;
	std::cout << "Darkest secret: " << _darkest_secret << std::endl;
}