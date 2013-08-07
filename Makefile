all: test

mylib.o: mylib.rs
	rustc -c mylib.rs

test: test.c zero.c mylib.o
	gcc -o test test.c zero.c mylib.o

clean:
	rm *.o
	rm test
