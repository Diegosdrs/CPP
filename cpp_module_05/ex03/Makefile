# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dsindres <dsindres@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/14 14:31:28 by dsindres          #+#    #+#              #
#    Updated: 2024/12/02 13:54:18 by dsindres         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = bureau

FLAGS = -Wall -Wextra -Werror -std=c++98

SRC = $(wildcard ./src/*.cpp)

OBJ_DIR = obj

OBJ = $(patsubst ./src/%.cpp, $(OBJ_DIR)/%.o, $(SRC))

CC = c++

all : $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(FLAGS) $(OBJ) -o $(NAME)
	@echo "compilation done :)"

$(OBJ_DIR)/%.o: ./src/%.cpp
	@mkdir -p $(OBJ_DIR)
	@$(CC) $(FLAGS) -c $< -o $@
	
clean :
	@rm -rf $(OBJ_DIR)
	@echo "cleaned"

fclean : clean
	@rm -rf $(NAME)
	@echo "fcleaned :)"

re : fclean all

.PHONY: all clean fclean re