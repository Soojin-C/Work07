run: driver.c linkedList.o
	gcc driver.c
	clear
	./a.out
	make clear

linkedList.o: linkedList.c linkedList.h
	gcc -c linkedList.c

clear:
	rm a.out
	rm linkedList.o
