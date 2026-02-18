/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabarea <atabarea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 14:24:30 by atabarea          #+#    #+#             */
/*   Updated: 2026/02/18 15:47:38 by atabarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
#define PHONEBOOK_H
# include <cstdlib>
# include <string>
# include <ostream>
# include <iostream>

class PhoneBook {
	public:
		PhoneBook();	//constructor
		~PhoneBook();	//destructor
		void	addcontact();
		void	searchcontact();
	private:
		
};

#endif