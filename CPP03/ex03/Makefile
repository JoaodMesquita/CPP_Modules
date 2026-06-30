# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: joapedro <joapedro@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/06/28 22:56:41 by joapedro          #+#    #+#              #
#    Updated: 2026/06/30 22:59:24 by joapedro         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = diamondtrap
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -g
SRCS = main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp DiamondTrap.cpp
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