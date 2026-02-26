/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_message.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabarea <atabarea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/20 10:35:49 by atabarea          #+#    #+#             */
/*   Updated: 2026/02/26 12:29:26 by atabarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void	error_message(std::string mssg)
{
	std::cout << "Error: invalid " << mssg << "!" << std::endl;
	if (mssg == "characters")
		std::cout << "Please enter valid ascii " << mssg << ":";
	else
		std::cout << "Please enter a valid " << mssg << ":";
}
