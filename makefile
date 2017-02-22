


make:
	cc -std=c99 -Wall parsing.c mpc.c -lm -ledit -o parsing


clean:
	rm -f *.o
