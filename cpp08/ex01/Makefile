# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ayarab <ayarab@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/13 19:48:26 by ayarab            #+#    #+#              #
#    Updated: 2025/05/13 19:48:27 by ayarab           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = span

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98


SRCS = main.cpp Span.cpp

OBJS = $(SRCS:.cpp=.o)


all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)


clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
