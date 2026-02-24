/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabarea <atabarea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/20 11:29:49 by atabarea          #+#    #+#             */
/*   Updated: 2026/02/24 14:17:52 by atabarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() {};
PhoneBook::~PhoneBook() {};

bool	PhoneBook::add_contact(void)
{
    size_t index;

	contact_index = contact_index % max_contacts;
    index = contact_index + 1;
    std::cout << "Creating new contact on index: " << index << std::endl;
    std::cout << "Please enter a first name:";
    if (!contacts[contact_index].set_info("first name"))
        return (false);
    std::cout << "Please enter a last name:";
    if (!contacts[contact_index].set_info("last name"))
        return (false);
    std::cout << "Please enter a nickname:";
    if (!contacts[contact_index].set_info("nickname"))
        return (false);
    std::cout << "Please enter a phonenumber:";
    if (!contacts[contact_index].set_info("phone number"))
        return (false);
    std::cout << "Please enter a darkest secret:";
    if (!contacts[contact_index].set_info("darkest secret"))
        return (false);
    contact_index++;
    std::cout << "Contact has been successfuly saved" << std::endl;
    return (true);
}

void    PhoneBook::display_contacts(Contact contacts[8])
{
    std::string temp_first_name;
    std::string temp_last_name;
    std::string temp_nickname;
    size_t      index;

    std::cout << std::setw(10) << "index" << "|"
        << std::setw(10) << "first name" << "|"
        << std::setw(10) << "last name" << "|" 
        << std::setw(10) << "nickname" << std::endl;
    for(size_t i = 0; i < max_contacts; i++)
    {
        index = i + 1;
        temp_first_name = contacts[i].first_name;
        temp_last_name = contacts[i].last_name;
        temp_nickname = contacts[i].nickname;
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
}

bool    PhoneBook::search_contact(void)
{
    std::string input;

    display_contacts(contacts);
    while (1)
    {
        std::cout << "Please enter an index number:";
        if (!std::getline(std::cin, input))
            return (false);
        if (check_alpha(input) == false)
            std::cout << "Error: Please enter only numbers" << std::endl;
        else
        {
            int index = std::atoi(input.c_str());
            if (index > 8 || index <= 0)
            {
                if (index > 8)
                    std::cout << "Max contact index is 8, please enter a number inside this range" << std::endl;
                if (index <= 0)
                    std::cout << "The lowest number for an index is 1" << std::endl;
                continue;
            }
            else
            {
                if (contacts[index - 1].first_name.empty())
                    std::cout << "This index doesn't have a contact assigned yet" << std::endl;
                else
                    contacts[index - 1].show_contact_info();
                break;
            }
        }
    }
    return (true);
}
