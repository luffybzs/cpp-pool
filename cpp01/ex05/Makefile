# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ayarab <ayarab@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/21 20:07:19 by ayarab            #+#    #+#              #
#    Updated: 2025/03/21 20:08:19 by ayarab           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Harl

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp Harl.cpp
OBJ = $(SRC:.cpp=.o)


GREEN = \033[32m
RED = \033[31m
YELLOW = \033[33m
RESET = \033[0m
CYAN = \033[36m


BAR_LENGTH = 50

$(NAME): $(OBJ)
	@echo "$(CYAN)Compilation en cours...$(RESET)"
	@$(CC) $(CFLAGS) -o $(NAME) $(OBJ)
	@echo "$(GREEN)Compilation terminée avec succès !$(RESET)"


%.o: %.cpp
	@echo "$(YELLOW)Compilation de $<$(RESET)"
	@$(CC) $(CFLAGS) -c $< -o $@
	@$(MAKE) progress


clean:
	@echo "$(RED)Suppression des fichiers objets...$(RESET)"
	@rm -f $(OBJ)
	@echo "$(GREEN)Fichiers objets supprimés !$(RESET)"


fclean: clean
	@echo "$(RED)Suppression de l'exécutable...$(RESET)"
	@rm -f $(NAME)
	@echo "$(GREEN)Exécutable supprimé !$(RESET)"


re: fclean $(NAME)


progress:
	@echo -n "["
	@for i in $(shell seq 1 $(BAR_LENGTH)); do echo -n "="; done
	@echo "] $(CYAN)$(BAR_LENGTH)%$(RESET)"
