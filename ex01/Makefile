NAME = animal

CC = c++

CFLAGS = -Wall -Werror -Wextra -std=c++98

EXT = .cpp

SRC = Animal$(EXT) Cat$(EXT) Dog$(EXT) main$(EXT) \
		Brain$(EXT)

all:$(NAME)

$(NAME) : $(SRC)
	@echo "Compiling..."
	@$(CC) $(CFLAGS) $(SRC) -o $(NAME)

clean:
	@echo "Cleaning..."
	@rm $(NAME)

fclean: clean

re: clean all

.PHONY: re clean all fclean%