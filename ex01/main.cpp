/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabarea <atabarea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 14:21:39 by atabarea          #+#    #+#             */
/*   Updated: 2026/02/18 15:53:35 by atabarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void    addcontact()
{
    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string phone_number;
    std::string darkest_secret;

    getline(std::cin, first_name);
    if (first_name[0] == '\0')
        std::cout <<

}

int	main(void)
{
	std::string comm;

    while (1)
    {
        getline(std::cin, comm);
        if (comm == "EXIT")
            break;
        else if (comm == "ADD")
            add_contact();
        else if (comm == "SEARCH")
            search_contact();
        else
            error_message("command");
    }
}
