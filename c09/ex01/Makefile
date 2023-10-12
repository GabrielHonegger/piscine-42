# Define compiler and compiler flags
CC = cc
CFLAGS = -Wall -Wextra -Werror

# Source and object files
SRC_DIR = srcs
INC_DIR = includes
SRC = $(wildcard $(SRC_DIR)/*.c)
INC = $(patsubst $(SRC_DIR)/ft.h)

# Library name
LIB_NAME = libft.a

# Targets
all: $(LIB_NAME)

$(LIB_NAME): $(INC)
	ar rcs $@ $^

$(INC_DIR)/%.h: $(SRC_DIR)/%.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(INC)

fclean: clean
	rm -f $(LIB_NAME)

re: fclean all
