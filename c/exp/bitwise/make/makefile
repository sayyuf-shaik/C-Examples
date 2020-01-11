fun_c.o :fun_c.c
	gcc -c fun_c.c
fun_b.o : fun_b.c
	gcc -c fun_b.c
fun_a.o : fun_a.c
	 gcc -c fun_a.c
main.o : main.c
	gcc -c main.c
app : main.o fun_a.o fun_b.o fun_c.o header.h
	gcc -o app main.o fun_a.o fun_b.o fun_c.o
