menu:main.o link.o
	gcc -o menu main.o link.o
main.o:main.c menu.h
	gcc -c  main.c
link.o:link.c menu.h
	gcc -c  link.c
clean:
	rm *.o