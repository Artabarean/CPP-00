/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabarea <atabarea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 12:10:10 by atabarea          #+#    #+#             */
/*   Updated: 2026/02/26 12:19:08 by atabarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cctype>

int	main(int argc, char *argv[])
{
	if (argc < 2 )
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	for (int count = 1; count < argc; count++)
	{
		std::string temp = argv[count];
		for (size_t i = 0; i < temp.length(); i++)
		{
			temp[i] = std::toupper(argv[count][i]);
			std::cout << temp[i];
		}
	}
	std::cout << std::endl;
	return (0);
}
