# N00918242 Luigi Razon

# build main file from main.o and function.o
main: main.o functions.o
	gcc -o main main.o functions.o

# compile main.c file into object file main.o
main.o: main.c
	gcc -c main.c

# compile functions.c file into object file functions.o
functions.o: functions.c
	gcc -c functions.c