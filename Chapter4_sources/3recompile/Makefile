encrypt.o: encrypt.c encrypt.h
	gcc -c encrypt.c

file_hider.o: file_hider.c encrypt.h
	gcc -c file_hider.c

file_hider: file_hider.o encrypt.o
	gcc file_hider.o encrypt.o -o file_hider
