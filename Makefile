OBJS	= Funcionario.o main.o Tratador.o Veterinario.o
SOURCE	= Funcionario.cpp main.cpp Tratador.cpp Veterinario.cpp
HEADER	= Funcionario.h ModelDAO.h Tratador.h Veterinario.h
OUT	= exec
CC	 = g++
FLAGS	 = -g -c -Wall
LFLAGS	 = 

all: $(OBJS)
	$(CC) -g $(OBJS) -o $(OUT) $(LFLAGS)

Funcionario.o: Funcionario.cpp
	$(CC) $(FLAGS) Funcionario.cpp 

main.o: main.cpp
	$(CC) $(FLAGS) main.cpp 

Tratador.o: Tratador.cpp
	$(CC) $(FLAGS) Tratador.cpp 

Veterinario.o: Veterinario.cpp
	$(CC) $(FLAGS) Veterinario.cpp 


clean:
	rm -f $(OBJS) $(OUT)