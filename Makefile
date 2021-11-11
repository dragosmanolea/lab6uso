all: is-prime hello-world

is-prime: is-prime.c
	gcc is-prime.c -o is-prime

hello-world: check.c
	gcc check.c -o hello-world

clean:
	rm -rf *.o is-prime hello-world