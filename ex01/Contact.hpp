/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabarea <atabarea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/20 12:27:47 by atabarea          #+#    #+#             */
/*   Updated: 2026/02/25 11:43:58 by atabarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP
# include <string>
# include <iostream>
# include <iomanip>

class Contact {
	public:
		Contact();
		~Contact();
		bool	set_info(std::string contact_info);
		void	show_contact_info(void);
		std::string get_info(std::string contact_info);
		void	show_basic_info(size_t index);
		bool	check_for_contact(void);
	private:
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string phone_number;
		std::string darkest_secret;
};

//Helper functions
void	error_message(std::string mssg);
bool	is_printable(std::string str);
bool	check_alpha(std::string str);

#endif