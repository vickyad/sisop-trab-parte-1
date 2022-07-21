#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h> 

#define PORT 4000

typedef struct __packet{
 uint16_t type; //Tipo do pacote (p.ex. DATA | CMD)
 uint16_t seqn; //Número de sequência
 uint16_t length; //Comprimento do payload
 uint16_t timestamp; // Timestamp do dado
 const char* _payload; //Dados da mensagem
} packet;

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