NAME = animalSound

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98 -g

SRCS = main.cpp Animal.cpp Cat.cpp Dog.cpp Brain.cpp \

all : $(NAME)

$(NAME): $(SRC)
		@echo "Compiling..."
		@$(CC) $(CFLAGS) $(SRCS) -o $(NAME)

clean:
		@echo "Cleaning..."
		@rm $(NAME)

fclean: clean

re: clean all

.PHONY: all re clean fclean    