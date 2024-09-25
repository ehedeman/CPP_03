# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ehedeman <ehedeman@student.42wolfsburg.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/06 14:26:42 by ehedeman          #+#    #+#              #
#    Updated: 2024/09/25 10:52:35 by ehedeman         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = main.cpp			\
		ClapTrap.cpp	\
		ScavTrap.cpp

OBJS_DIR = objs/
OBJS = $(SRC:.cpp=.o)
OBJS_PREFIXED = $(addprefix $(OBJS_DIR), $(OBJS))
HEADERS = ClapTrap.hpp ScavTrap.hpp
CC = c++
RM = rm -rf
MKDIR = mkdir -p
CPPFLAGS = -Wall -Wextra -Werror -Wshadow -std=c++98 -pedantic

NAME = ScavTrap

all: $(NAME)

$(NAME): $(OBJS_PREFIXED)
	$(CC) $(CPPFLAGS) $(OBJS_PREFIXED) -o $(NAME)

$(OBJS_DIR)%.o : %.cpp $(HEADERS)
	$(MKDIR) $(OBJS_DIR)
	$(CC) $(CPPFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

leaks: 
	valgrind --leak-check=full	\
         --show-leak-kinds=all ./$(NAME)
		 
.PHONY: all clean re fclean leaks