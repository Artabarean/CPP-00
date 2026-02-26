# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: atabarea <atabarea@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/02/26 11:15:10 by atabarea          #+#    #+#              #
#    Updated: 2026/02/26 11:35:33 by atabarea         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= Account
CXX			= c++
CPPFLAGS	= -Wall -Wextra -Werror -std=c++98

INCLUDE	= -I Account.hpp

SRC		=	\
	tests.cpp \
	Account.cpp 

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