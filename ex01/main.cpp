/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niklasburchhardt <niklasburchhardt@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 21:53:52 by niklasburch       #+#    #+#             */
/*   Updated: 2024/07/08 18:10:40 by niklasburch      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main(void)
{
	PhoneBook phone_book;
	std::string line;

	std::cout << "Welcome to the phone book!\nEnter ADD, SEARCH or EXIT" << std::endl;
	while(true)
	{
		std::cout << "> ";
		std::getline(std::cin, line);
		if (std::cin.eof())
			break ;
		if (line == "ADD")
			phone_book.add();
		else if (line == "SEARCH")
			phone_book.search();
		else if (line == "EXIT")
			break ;
		else
			std::cout << "Invalid command" << std::endl;
	}
	return 0;
}