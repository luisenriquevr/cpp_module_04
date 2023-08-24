# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lvarela <lvarela@student.42madrid.com>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/22 18:00:26 by lvarela           #+#    #+#              #
#    Updated: 2023/08/24 16:30:16 by lvarela          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=	$(wildcard *.cpp)
OBJS	=	$(SRCS:%.cpp=%.o)
CC		=	c++
CPPSTD	=	-std=c++98
FLAGS	=	-Wall -Werror -Wextra -Wshadow -pedantic # -fsanitize=address -g3
RM		=	rm -rf
NAME	=	Animal

all		:	$(NAME)

$(NAME) :	$(OBJS)
			$(CC) $(CPPSTD) $(FLAGS) $(OBJS) -o $(NAME)

%.o	:	%.cpp
			$(CC) $(FLAGS) -c $^ -o $@

clean	:
			$(RM) $(OBJS)

fclean	:	clean
			$(RM) $(NAME)

re		:	fclean all

.PHONY	:	all clean fclean re
