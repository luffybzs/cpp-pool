# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ayarab <ayarab@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/21 18:25:06 by ayarab            #+#    #+#              #
#    Updated: 2025/04/21 18:25:25 by ayarab           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = bureaucrat


CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
DEBUG = -g -DDEBUG=1

SRCS = main.cpp Bureaucrat.cpp
OBJS = $(SRCS:.cpp=.o)


GREEN = \033[0;32m
RED = \033[0;31m
NC = \033[0m


all: $(NAME)

$(NAME): $(OBJS)
	@$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)
	@echo "$(GREEN)✅ Executable $(NAME) created$(NC)"

%.o: %.cpp
	@$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	@rm -f $(OBJS)
	@echo "$(RED)🧹 Object files removed$(NC)"

fclean: clean
	@rm -f $(NAME)
	@echo "$(RED)🧹 Executable $(NAME) removed$(NC)"

re: fclean all

debug: CXXFLAGS += $(DEBUG)
debug: re
	@echo "$(GREEN)🐞 Debug mode enabled$(NC)"

.PHONY: all clean fclean re debug