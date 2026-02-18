/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabarea <atabarea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 12:10:10 by atabarea          #+#    #+#             */
/*   Updated: 2026/02/18 14:41:57 by atabarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cctype>

typedef std::string string;
	using std::cout;
	using std::endl;

int	main(int argc, char *argv[])
{
	if (argc < 2 )
	{
		cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << endl;
		return (0);
	}
	for (int count = 1; count < argc; count++)
	{
		std::string temp = argv[count];
		for (size_t i = 0; i < temp.length(); i++)
		{
			temp[i] = std::toupper(argv[count][i]);
			cout << temp[i];
		}
	}
	cout << endl;
	return (0);
}
