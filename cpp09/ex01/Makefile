# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ayarab <ayarab@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/20 14:46:50 by ayarab            #+#    #+#              #
#    Updated: 2025/05/21 18:35:04 by ayarab           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME     = RPN
CXX      = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -g3

SRCS     = main.cpp RPN.cpp
OBJS     = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean ree