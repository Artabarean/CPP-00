/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabarea <atabarea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 14:21:39 by atabarea          #+#    #+#             */
/*   Updated: 2026/02/25 11:36:02 by atabarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

size_t PhoneBook::max_contacts = 8;

int	main(void)
{
	std::string comm;
    PhoneBook PhoneBook;

    PhoneBook.contact_index = 0;
    for(;;)
    {
        std::cout << "Please enter a command:";
        if (!std::getline(std::cin, comm))
            return (1);
        if (comm == "EXIT")
            break;
        else if (comm == "ADD")
        {
            if (!PhoneBook.add_contact())
                break;
        }
        else if (comm == "SEARCH")
        {
            if (!PhoneBook.search_contact())
                break;
        }
    }
    return (0);
}
