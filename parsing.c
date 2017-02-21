#include <stdio.h>
#include <stdlib.h>

#include <editline/readline.h>
#include <editline/history.h>

#include "mpc.h"

int main(int argc, char** argv) {
	

	puts("Lispy Version 0.0.0.1");
	puts("Press ctrl+c to exit.\n");

	while(1) {
	
		char* input = readline("lispy> ");

		add_history(input);

		printf("%s\n", input);

		free(input);
	}

	return 0;
}
