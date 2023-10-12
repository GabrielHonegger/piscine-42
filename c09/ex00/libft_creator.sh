#!/bin/bash
# This script compiles source files into a static library called libft.a

# Set the compiler and compiler flags
CC=cc
CFLAGS="-Wall -Wextra -Werror"

# List of source files to compile
SRC_FILES=("ft_putchar.c" "ft_swap.c" "ft_putstr.c" "ft_strlen.c" "ft_strcmp.c")

# Output binary file name
LIBRARY_NAME="libft"

# Clean up any existing binary
if [ -f "$LIBRARY_NAME.a" ]; then
	rm "$LIBRARY_NAME.a"
fi

# Compile the source files into object files
for source in "${SRC_FILES[@]}"; do
	$CC $CFLAGS -c "$source"
done

# Create the static library
ar rcs "$LIBRARY_NAME.a" *.o

# Check if the library creation was successful
if [ $? -eq 0 ]; then
	echo "Compilation successful. Executable: $LIBRARY_NAME"
else
	echo "Compilation failed."
fi

# Clean up temporary object files
rm -f *.o
