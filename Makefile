CC = gcc -c 
CFLAGS = -Wall -g
CLIB = ar rcs  
CLIBD = gcc -shared -o 


all: connections


connections: main.o my_mat.o
	gcc $(CFLAGS)  main.o my_mat.o -o connections

main.o: main.c my_mat.h
	$(CC) $(CFLAGS) main.c

my_mat.o: my_mat.c my_mat.h
	$(CC) $(CFLAGS) my_mat.c

.PHONY:clean
clean:
	rm -rf *.o connections