# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ayarab <ayarab@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/31 19:38:54 by ayarab            #+#    #+#              #
#    Updated: 2025/03/31 19:41:09 by ayarab           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++                          
CFLAGS = -Wall -Werror -Wextra -std=c++98 -g3
SRC = main.cpp Fixed.cpp          
OBJ = $(SRC:.cpp=.o)             
NAME = Fixed                      

RED     = \033[31m
GREEN   = \033[32m
YELLOW  = \033[33m
BLUE    = \033[34m
RESET   = \033[0m

loading_bar = \
	@echo -n "[${YELLOW}Loading...${RESET}] "; \
	for i in `seq 1 50`; do \
		sleep 0.05; \
		echo -n "${BLUE} \\\033[2K\\r"; \
	done; \
	echo ""

all: $(NAME)

$(NAME): $(OBJ)
	@echo "${GREEN}Compilation réussie. Création de l'exécutable...${RESET}"
	$(CC) $(OBJ) -o $(NAME) 
	$(call loading_bar)

%.o: %.cpp
	@echo "${BLUE}Compilation de $<...${RESET}"
	$(CC) $(CFLAGS) -c $< -o $@
	@echo "${GREEN}[OK]${RESET}"

clean:
	@echo "${RED}Suppression des fichiers objets...${RESET}"
	rm -f $(OBJ)
	@echo "${GREEN}[OK]${RESET}"

fclean: clean
	@echo "${RED}Suppression de l'exécutable...${RESET}"
	rm -f $(NAME)
	@echo "${GREEN}[OK]${RESET}"

re: fclean all

test: $(NAME)
	@echo "${YELLOW}Lancement du programme...${RESET}"
	./$(NAME)