NAME = ex02

SRC = main.cpp \
		AssaultTerminator.cpp \
		Squad.cpp \
		TacticalMarine.cpp

OBJ = $(SRC:.cpp=.o)
CC = clang++
FLAGS = -Wall -Wextra -Werror -std=c++98

%.o : %.cpp
	$(CC) $(FLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) -o $(NAME) $(OBJ)

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
