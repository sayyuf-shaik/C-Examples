app:main.o  malloc_input.o strcasecmp.o
	gcc -o app *.o
	mv *.o ../obj
main.o:main.c
	gcc -Wall -I ../hdr -c main.c
malloc_input.o:malloc_input.c
	gcc -Wall -I ../hdr -c malloc_input.c
strcasecmp.o:strcasecmp.c
	gcc -Wall -I ../hdr -c strcasecmp.c
