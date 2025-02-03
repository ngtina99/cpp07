NAME = whatever

SRC_DIR = ./src/
SRC = main.cpp
OBJ = $(addprefix $(SRC_DIR), $(SRC:.cpp=.o))

INC_DIR = ./inc/

CC = c++
RM = rm -f

CPPFLAFGS =  -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re