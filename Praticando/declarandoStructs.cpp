//declaração de uma STRUCT
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct produto{
	int cod;
	float preco;
	char desc[100];
};
int main (){
	struct produto prod;
	prod.cod = 1;
	prod.preco = 14.75;
	strcpy(prod.desc, "Batata");
	printf ("%d - %s - %f \n", prod.cod, prod.preco,prod.desc); 
}
