# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: atabarea <atabarea@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/02/18 14:42:54 by atabarea          #+#    #+#              #
#    Updated: 2026/02/24 12:51:36 by atabarea         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= PhoneBook
CXX			= c++
CPPFLAGS	= -Wall -Wextra -Werror -std=c++98

INCLUDE	= -I PhoneBook.hpp -I Contact.hpp

SRC		=	\
	main.cpp \
	error_message.cpp \
	PhoneBook.cpp \
	Contact.cpp \
	utils.cpp 

OBJS	= $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CPPFLAGS) $(INCLUDE) $(OBJS) -o $(NAME)  

%.o: %.cpp
	$(CXX) $(CPPFLAGS) $(INCLUDE) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean fclean re bonus