app.out : a.o b.o
    gcc a.o b.o -o app.out
a.o : a.c
    gcc -c a.c -o a.o
b.o : b.c
    gcc -c b.c -o b.o
clean :
    rm -rf *.o app.out