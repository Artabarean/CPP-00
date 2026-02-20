/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabarea <atabarea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/20 11:29:49 by atabarea          #+#    #+#             */
/*   Updated: 2026/02/20 12:47:26 by atabarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() {};
PhoneBook::~PhoneBook() {};

void	PhoneBook::add_contact()
{
	contact_index = contact_index % max_contacts;
    contacts[contact_index].set_info("first_name");
    contacts[contact_index].set_info("last_name");
    contacts[contact_index].set_info("nickname");
    contacts[contact_index].set_info("phone_number");
    contacts[contact_index].set_info("darkest_secret");
	contact_index++;
}

void    PhoneBook::search_contact()
{


}
