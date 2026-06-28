# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: joapedro <joapedro@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/06/17 11:40:40 by joapedro          #+#    #+#              #
#    Updated: 2026/06/17 14:56:46 by joapedro         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: joapedro <joapedro@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/06/12 14:24:18 by joapedro          #+#    #+#              #
#    Updated: 2026/06/14 20:51:12 by joapedro         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =  zombie
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -g
SRCS = newZombie.cpp randomChump.cpp Zombie.cpp main.cpp
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