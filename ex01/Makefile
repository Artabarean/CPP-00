# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: atabarea <atabarea@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/02/18 14:42:54 by atabarea          #+#    #+#              #
#    Updated: 2026/02/18 14:45:22 by atabarea         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= phonebook
CXX			= c++
CPPFLAGS	= -Wall -Wextra -Werror -std=c++98

INCLUDE	= phonebook.hpp

SRC		= main.cpp

OBJS	= $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CPPFLAGS) $(OBJS) -o $(NAME)  

%.o: %.cpp
	$(CXX) $(CPPFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean fclean re bonus