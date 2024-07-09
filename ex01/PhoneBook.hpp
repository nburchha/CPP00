/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nburchha <nburchha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 21:55:00 by niklasburch       #+#    #+#             */
/*   Updated: 2024/07/09 14:18:02 by nburchha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <string>
# include <iomanip>
# include <cctype>
# include <cstdlib>
# include "Contact.hpp"

class PhoneBook
{
	private:
		Contact contacts[8];
		int count;
		int index;
	public:
		PhoneBook();
		void add();
		void search();
};

#endif