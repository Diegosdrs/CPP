# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dsindres <dsindres@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/14 14:31:28 by dsindres          #+#    #+#              #
#    Updated: 2025/04/07 11:26:22 by dsindres         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = PmergeMe

HEADER = ./include/PmergeMe.h

FLAGS = -Wall -Wextra -Werror -std=c++98

SRC = ./src/PmergeMe.cpp ./src/main.cpp

OBJ_DIR = obj

OBJ = ./obj/PmergeMe.o ./obj/main.o 

CC = c++

all : $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(FLAGS) $(OBJ) -o $(NAME)
	@echo "compilation done :)"

$(OBJ_DIR)/%.o: ./src/%.cpp $(HEADER)
	@mkdir -p $(OBJ_DIR)
	@$(CC) $(FLAGS) -I./include -c $< -o $@
	
clean :
	@rm -rf $(OBJ_DIR)
	@echo "cleaned"

fclean : clean
	@rm -rf $(NAME)
	@echo "fcleaned :)"

re : fclean all

.PHONY: all clean fclean re
