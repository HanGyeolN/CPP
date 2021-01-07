.PHONY: all clean fclean re

NAME = phonebook

CC = clang++

CFLAGS = -Wall -Werror -Wextra

HEADER_DIR = .

SRC_DIR = .

SRC = Phonebook.cpp		main.cpp

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