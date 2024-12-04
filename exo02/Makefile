# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bloisel <bloisel@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/30 06:04:51 by bloisel           #+#    #+#              #
#    Updated: 2024/12/04 15:35:31 by bloisel          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SRC =  main.cpp Animal.cpp  WrongAnimal.cpp WrongCat.cpp  Brain.cpp Cat.cpp Dog.cpp 
NAME =	Animal
CC = c++ -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(SRC) -o $(NAME)

clean:
	rm -rf $(NAME)

fclean: clean

re: fclean all