/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niklasburchhardt <niklasburchhardt@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 21:57:54 by niklasburch       #+#    #+#             */
/*   Updated: 2024/07/04 23:27:06 by niklasburch      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	index = 0;
	count = 0;
}

std::string put_message_get_input(std::string message)
{
	std::string input;

	std::cout << message;
	std::getline(std::cin, input);
	if (input.empty())
	{
		std::cout << "Invalid input" << std::endl;
		return put_message_get_input(message);
	}
	return input;
}

int check_phone(std::string phone)
{
	try {
		return std::stoi(phone);
	} catch (const std::invalid_argument& e) {
		std::cout << "Invalid phone number" << std::endl;
	} catch (const std::out_of_range& e) {
		std::cout << "Phone number is too long" << std::endl;
	}
	return check_phone(put_message_get_input("Enter phone number: "));
}

std::string check_name(std::string name, std::string message)
{
	if (std::any_of(name.begin(), name.end(), ::isdigit))
	{
		std::cout << "Invalid name" << std::endl;
		return check_name(put_message_get_input(message), message);
	}
	return name;
}

void PhoneBook::add()
{
	if (index == 8)
		index = 0;
	contacts[index].set_first_name(check_name(put_message_get_input("Enter first name: "), "Enter first name: "));
	contacts[index].set_last_name(check_name(put_message_get_input("Enter last name: "), "Enter last name: "));
	contacts[index].set_nickname(check_name(put_message_get_input("Enter nickname: "), "Enter nickname: "));
	contacts[index].set_phone(check_phone(put_message_get_input("Enter phone number: ")));
	contacts[index].set_darkest_secret(put_message_get_input("Enter darkest secret: "));
	if (count < 8)
		count++;
	index++;
}

void PhoneBook::search()
{
	std::string input;

	if (count == 0)
		std::cout << "No contacts available" << std::endl;
	else
	{
		std::cout << "|index     |first name|last name |nickname  |" << std::endl;
		for (int i = 0; i < count; i++)
			contacts[i].display_names(i);
		std::cout << "Enter index: ";
		std::getline(std::cin, input);
		if (input.empty())
			std::cout << "Invalid input" << std::endl;
		else
		{
			try {
				int index = std::stoi(input);
				if (index >= 0 && index < count)
					contacts[index].display_details();
				else
					std::cout << "Invalid index" << std::endl;
			} catch (const std::invalid_argument& e) {
				std::cout << "Invalid index" << std::endl;
			} catch (const std::out_of_range& e) {
				std::cout << "Invalid index" << std::endl;
			}
		}
	}
}
