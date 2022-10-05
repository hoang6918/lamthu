myfactorial: 
	gcc main.c factorial.c readline.c -o myfactorial

all: main.o factorial.o readline.o
	gcc -o main main.o factorial.o readline.o
	
main.o: main.c
	gcc -c main.c
        
factorial.o: factorial.c factorial.h
	gcc -c factorial.c
	
readline.o: readline.c readline.h
	gcc -c readline.c
	
clean:
	rm -f *.o main readline factorial
