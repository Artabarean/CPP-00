/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabarea <atabarea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 14:21:39 by atabarea          #+#    #+#             */
/*   Updated: 2026/02/20 13:01:37 by atabarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

size_t PhoneBook::max_contacts = 8;

int	main(void)
{
	std::string comm;
    PhoneBook PhoneBook;
    PhoneBook.contact_index = 0;
    while (1)
    {
        if (!getline(std::cin, comm))
            return (1);
        if (comm == "EXIT")
            break;
        else if (comm == "ADD")
            PhoneBook.add_contact();
        else if (comm == "SEARCH")
            PhoneBook.search_contact();
    }
    return (0);
}
