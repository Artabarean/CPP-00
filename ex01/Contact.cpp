/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabarea <atabarea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/20 12:30:34 by atabarea          #+#    #+#             */
/*   Updated: 2026/02/20 14:13:05 by atabarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(){};
Contact::~Contact(){};

std::string get_input(std::string prompt)
{
    std::string input;

    while (1)
    {
        if (!getline(std::cin, input))
            return "";
        if (!input.empty())
            break;
        error_message(prompt);
    }
    return (input);
}

void Contact::set_info(std::string contact_info)
{
	std::string input = get_input(contact_info);
	if (contact_info == "first_name")
		this->first_name = input;
	if (contact_info == "last_name")
		this->last_name = input;
	if (contact_info == "nickname")
		this->nickname = input;
	if (contact_info == "phone_number")
		this->phone_number = input;
	if (contact_info == "darkest_secret")
		this->darkest_secret = input;
}

std::string Contact::get_info(std::string contact_info)
{
    if (contact_info == "first_name")
		return (this->first_name);
	if (contact_info == "last_name")
		return (this->last_name);
	if (contact_info == "nickname")
		return (this->nickname);
	if (contact_info == "phone_number")
		return (this->phone_number);
	if (contact_info == "darkest_secret")
		return (this->darkest_secret);
	return ("NONE");
}
