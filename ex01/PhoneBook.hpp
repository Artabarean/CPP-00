/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabarea <atabarea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 14:24:30 by atabarea          #+#    #+#             */
/*   Updated: 2026/02/20 12:47:56 by atabarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include <cstdlib>
# include <string>
# include <iostream>
# include <cstdio>
# include "Contact.hpp"

class PhoneBook {
	public:
		PhoneBook();	//constructor
		~PhoneBook();	//destructor
		void	add_contact();
		void	search_contact();
		static size_t	max_contacts;
		size_t	contact_index;
	private:
		Contact contacts[8];
		
};

#endif