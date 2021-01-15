# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hna <hna@student.42seoul.kr>               +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/01/14 16:38:29 by hna               #+#    #+#              #
#    Updated: 2021/01/14 16:40:46 by hna              ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY: all clean fclean re

NAME = replace

CC = clang++

CFLAGS = -Wall -Werror -Wextra -std=c++98

HEADER_DIR = .

SRC_DIR = .

SRC = FileException.cpp		StringException.cpp		main.cpp

SRCS = $(addprefix $(SRC_DIR)/, $(SRC))

OBJS = $(SRCS:%.cpp=%.o)

$(NAME) : $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o : %.cpp
		$(CC) $(CFLAGS) -o $@ -c $^ -I $(HEADER_DIR)

all : $(NAME)

clean :
		rm -f $(OBJS)

fclean : clean
		rm -f $(NAME)

re : fclean all