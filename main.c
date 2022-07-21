#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h> 

#define PORT 4000

int main(int argc, char *argv[])
{
	if (argc == 1) {
		printf("oi, eu sou o participante\n");
	} else if (strcmp(argv[1], "manager") == 0) {
		printf("oi, eu sou o manager\n");
	} else {
		printf("ERROR: invalid input\n");
	}
	return 0; 
}