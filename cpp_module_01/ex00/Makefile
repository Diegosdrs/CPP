# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dsindres <dsindres@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/14 14:31:28 by dsindres          #+#    #+#              #
#    Updated: 2024/11/19 10:17:01 by dsindres         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = zombie

HEADER = Zombie.h

FLAGS = -Wall -Wextra -Werror -std=c++98

SRC = Zombie.cpp main.cpp newZombie.cpp randomChump.cpp

OBJ_DIR = obj

OBJ = $(addprefix $(OBJ_DIR)/, $(SRC:.cpp=.o))


CC = c++


all : $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(FLAGS) $(OBJ) -o $(NAME)
	@echo "compilation done :)"

$(OBJ_DIR)/%.o: %.cpp $(HEADER)
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