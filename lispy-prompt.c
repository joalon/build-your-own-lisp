#include <stdio.h>


static char input[2048];

int main(int argc, char** argv) {
	

	puts("Lispy Version 0.0.0.1");
	puts("Press ctrl+c to exit.\n");

	while(1) {
	
		fputs("lispy> ", stdout);

		fgets(input, 2048, stdin);

		printf("%s", input);

	}

	return 0;
}
