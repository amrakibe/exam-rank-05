# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amrakibe <amrakibe@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/03 17:23:24 by amrakibe          #+#    #+#              #
#    Updated: 2023/03/01 16:20:51 by amrakibe         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Warlock
CC = c++
FLAG = -Wall -Wextra -Werror -std=c++98
RM = rm -rf

SRC = main.cpp Warlock.cpp

OBJ = $(SRC:.cpp=.o)

$(NAME) : $(OBJ)
	$(CC) $(FLAG) $(OBJ) -o $(NAME)

all : $(NAME)

%.o:%.cpp Warlock.hpp
	$(CC) $(FLAG) -c $< -o $@

clean:
	@$(RM) $(OBJ)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

.PHONY: fclean clean
