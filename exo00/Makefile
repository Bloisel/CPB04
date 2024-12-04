# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bloisel <bloisel@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/30 06:04:51 by bloisel           #+#    #+#              #
#    Updated: 2024/12/03 05:03:50 by bloisel          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC =  main.cpp Animal.cpp Dog.cpp WrongAnimal.cpp WrongCat.cpp Cat.cpp
NAME =	Animal
CC = c++ -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(SRC) -o $(NAME)

clean:
	rm -rf $(NAME)

fclean: clean

re: fclean all