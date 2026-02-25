/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabarea <atabarea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/24 10:27:28 by atabarea          #+#    #+#             */
/*   Updated: 2026/02/25 11:37:12 by atabarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

bool	check_alpha(std::string str)
{
	for(size_t i = 0; i < str.length(); i++)
	{
		if (str[i] < '0' || str[i] > '9')
			return (false);
	}
	return (true);
}

bool	is_printable(std::string str)
{
	for (size_t i = 0; i < str.length(); i++)
	{
		if (str[i] < 32 || str[i] > 126)
			return (false);
	}
	return (true);
}
