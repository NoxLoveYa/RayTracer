##
## EPITECH PROJECT, 2023
## bs
## File description:
## Makefile
##

NAME=tracer
SRC=$(wildcard source/*.cpp)
OBJ=$(SRC:.cpp=.o)

all : $(OBJ)
	g++ -o $(NAME) $(OBJ)

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)
	rm -f test.ppm

test : clean all
	clear && echo "Output." && ./$(NAME)
