.PHONY: all clean fclean re

NAME = megaphone

CC = clang++

CFLAGS = -Wall -Werror -Wextra

SRC_DIR = .

SRC = megaphone.cpp

SRCS = $(addprefix $(SRC_DIR)/, $(SRC))

OBJS = $(SRCS:%.c=%.o)

$(NAME) : $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o : %.c
		$(CC) $(CFLAGS) -o $@ -c $^

all : $(NAME)

clean :
		rm -f $(OBJS)

fclean : clean
		rm -f $(NAME)

re : fclean all