all: test

mylib.bc: mylib.rs
	rustc --emit-llvm mylib.rs	

mylib.o: mylib.bc
	clang -c mylib.bc

test: test.c mylib.o
	clang -o test test.c mylib.o

clean:
	rm *.bc
	rm *.o
	rm test
