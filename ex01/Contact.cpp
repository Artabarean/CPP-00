/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabarea <atabarea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/20 12:30:34 by atabarea          #+#    #+#             */
/*   Updated: 2026/02/26 12:27:26 by atabarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(){}
Contact::~Contact(){}

std::string get_input(std::string prompt)
{
    std::string input;

    for(;;)
    {
        if (!std::getline(std::cin, input))
            return "";
        if (!input.empty())
		{
			if (is_printable(input) == false)
			{
				error_message("characters");
				continue;
			}
			if (prompt == "phone number" && input.length() <= 9 && check_alpha(input) == true)
            	break;
			if (prompt != "phone number")
				break;
		}
        error_message(prompt);
    }
    return (input);
}

void	Contact::show_basic_info(size_t index)
{
	std::string temp_first_name = this->first_name;
    std::string temp_last_name = this->last_name;
    std::string temp_nickname = this->nickname;
    if (temp_first_name.length() > 10)
        temp_first_name = temp_first_name.substr(0, 9) + ".";
    if (temp_last_name.length() > 10)
        temp_last_name = temp_last_name.substr(0, 9) + ".";
    if (temp_nickname.length() > 10)
        temp_nickname = temp_nickname.substr(0, 9) + ".";
    std::cout << std::setw(10) << index << "|"
        << std::setw(10) << temp_first_name << "|"
        << std::setw(10) << temp_last_name << "|" 
        << std::setw(10) << temp_nickname << std::endl;
}

bool	Contact::check_for_contact(void)
{
	if (this->first_name.empty())
		return (false);
	return (true);
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
	std::cout << "Contact information:\n"
		<< "first name: " << this->first_name
		<< "\nlast name: " << this->last_name
		<< "\nnickname: " << this->nickname
		<< "\nphone number: " << this->phone_number
		<< "\ndarkest secret: " << this->darkest_secret
		<< std::endl;
}

std::string Contact::get_info(std::string contact_info)
{
	char c = contact_info[0];

	switch(c)
	{
		case 'f':
			return (this->first_name);
		case 'l':
			return (this->last_name);
		case 'n':
			return (this->nickname);	
		case 'p':
			return (this->phone_number);
		case 'd':
			return (this->darkest_secret);
	}
	return ("NONE");
	
}
