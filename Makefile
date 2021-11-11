all: is-prime

is-prime: is-prime.c
	gcc is-prime.c -o is-prime

clean:
	rm -rf *.o is-prime