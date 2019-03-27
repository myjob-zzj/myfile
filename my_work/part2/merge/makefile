merge:main.o link.o
	gcc -o merge main.o link.o
main.o:main.c merge.h
	gcc -c  main.c
link.o:link.c merge.h
	gcc -c  link.c
clean:
	rm *.o