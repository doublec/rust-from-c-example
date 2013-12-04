all: test

mylib.o: mylib.rs
	rustc -c mylib.rs

test: test.c mylib.o
	gcc -o test test.c mylib.o

clean:
	rm *.o
	rm test
