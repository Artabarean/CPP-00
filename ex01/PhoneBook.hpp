/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabarea <atabarea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 14:24:30 by atabarea          #+#    #+#             */
/*   Updated: 2026/02/24 10:44:43 by atabarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include <cstdlib>
# include <string>
# include <iostream>
# include <cstdio>
# include <iomanip>
# include "Contact.hpp"

class PhoneBook {
	public:
		PhoneBook();
		~PhoneBook();
		bool	add_contact(void);
		bool	search_contact(void);
		void	display_contacts(Contact contacts[8]);
		static size_t	max_contacts;
		size_t	contact_index;
	private:
		Contact contacts[8];	
};

bool	check_alpha(std::string str);

#endif