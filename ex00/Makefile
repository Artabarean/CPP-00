# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: atabarea <atabarea@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/02/18 12:33:18 by atabarea          #+#    #+#              #
#    Updated: 2026/02/18 12:52:20 by atabarea         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= megaphone
CXX			= c++
CPPFLAGS	= -Wall -Wextra -Werror -std=c++98

SRC		= megaphone.cpp

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