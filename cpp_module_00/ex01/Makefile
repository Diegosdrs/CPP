# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dsindres <dsindres@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/12 13:38:33 by dsindres          #+#    #+#              #
#    Updated: 2024/11/13 15:24:06 by dsindres         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = PhoneBook

HEADER = HeaderPhoneBook.hpp

FLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp Contact.cpp PhoneBook.cpp

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
