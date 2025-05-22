NAME   =  (nome do programa)
CC     =  g++
LIBS   = -lm
CFLAGS = -g -Wall -I.

all: compile run

compile: 
	$(CC) -o $(NAME) $(NAME).cpp $(LIBS) $(CFLAGS)
run: 
	./$(NAME)

.PHONY: clean
clean:
	rm $(NAME)
