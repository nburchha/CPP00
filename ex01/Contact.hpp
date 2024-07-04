/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niklasburchhardt <niklasburchhardt@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 21:52:39 by niklasburch       #+#    #+#             */
/*   Updated: 2024/07/04 23:26:49 by niklasburch      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

# include <iostream>
# include <iomanip>
# include <string>

class Contact
{
private:
	std::string _first_name;
	std::string _last_name;
	std::string _nickname;
	std::string _darkest_secret;
	int _phone;

public:
	Contact();
	void set_first_name(std::string first_name);
	void set_last_name(std::string last_name);
	void set_nickname(std::string nickname);
	void set_phone(int phone);
	void set_darkest_secret(std::string darkest_secret);
	void display_names(int index);
	void display_details();
	// std::string get_first_name();
	// std::string get_last_name();
	// std::string get_nickname();
	// std::string get_darkest_secret();
	// int get_phone();
};

#endif