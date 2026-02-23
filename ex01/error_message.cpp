/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_message.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabarea <atabarea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/20 10:35:49 by atabarea          #+#    #+#             */
/*   Updated: 2026/02/23 11:16:02 by atabarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void	error_message(std::string mssg)
{
	std::cout << "Error: invalid " << mssg << "!" << std::endl;
	std::cout << "Please enter a valid " << mssg << ": ";
}
