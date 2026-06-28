# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: joapedro <joapedro@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/06/19 13:06:09 by joapedro          #+#    #+#              #
#    Updated: 2026/06/20 10:44:56 by joapedro         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =  harl
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -g
SRCS = main.cpp Harl.cpp
OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	@echo "compiling..."
	@c++ $(CXXFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp
	@c++ $(CXXFLAGS) -c $< -o $@

clean:
	@echo "removing object files..."
	@rm -f $(OBJS)

fclean: clean
	@echo "removing executable..."
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re