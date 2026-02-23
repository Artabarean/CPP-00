/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabarea <atabarea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/20 12:30:34 by atabarea          #+#    #+#             */
/*   Updated: 2026/02/23 14:10:46 by atabarea         ###   ########.fr       */
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
        if (!std::getline(std::cin, input))
            return "";
        if (!input.empty())
		{
			if (prompt == "phone number" && input.length() == 9)
            	break;
			if (prompt != "phone number")
				break;
		}
        error_message(prompt);
    }
    return (input);
}

bool	Contact::set_info(std::string contact_info)
{
	std::string input = get_input(contact_info);
	if (input.empty())
		return (false);
	if (contact_info == "first name")
		this->first_name = input;
	else if (contact_info == "last name")
		this->last_name = input;
	else if (contact_info == "nickname")
		this->nickname = input;
	else if (contact_info == "phone number")
		this->phone_number = input;
	else if (contact_info == "darkest secret")
		this->darkest_secret = input;
	return (true);
}

void	Contact::show_contact_info(void)
{
	while (1)
	{
		
	}
}

std::string Contact::get_info(std::string contact_info)
{
    if (contact_info == "first name")
		return (this->first_name);
	if (contact_info == "last name")
		return (this->last_name);
	if (contact_info == "nickname")
		return (this->nickname);
	if (contact_info == "phone number")
		return (this->phone_number);
	if (contact_info == "darkest secret")
		return (this->darkest_secret);
	return ("NONE");
}
