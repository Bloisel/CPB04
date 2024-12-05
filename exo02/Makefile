# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bloisel <bloisel@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/30 06:04:51 by bloisel           #+#    #+#              #
#    Updated: 2024/12/05 17:15:21 by bloisel          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SRC =  main.cpp AAnimal.cpp  WrongAnimal.cpp WrongCat.cpp  Brain.cpp Cat.cpp Dog.cpp 
NAME =	AAnimal
CC = c++ -Wall -Wextra -Werror -std=c++98 -g -fsanitize=address

all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(SRC) -o $(NAME)

clean:
	rm -rf $(NAME)

fclean: clean

re: fclean all