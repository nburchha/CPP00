/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niklasburchhardt <niklasburchhardt@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 21:39:30 by niklasburch       #+#    #+#             */
/*   Updated: 2024/07/04 22:22:29 by niklasburch      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

std::string to_uppercase(std::string s)
{
	for (int i = 0; s[i]; i++)
	{
		if (std::islower(s[i]))
			std::toupper(s[i]);
	}
	return (s);
}

int main(int argc, char **argv)
{
	if (argc == 1)
		return (std::cout << "* LOUD AND UNBEREABLE FEEDBACK NOISE *" << std::endl, 0);
	for (int i = 1; i < argc; i++)
		std::cout << to_uppercase(argv[i]);
	std::cout << std::endl;
	return (0);
}
