// STRUCT & VETORES
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct produto{
	int cod;
	float preco;
	char descr[100];
};
int main (){
	struct produto lista [10];	
	for (int i=0; i<10; i++){
		lista [i].cod = i;		
		printf("Digite o valor do produto %d: \n", i);
		scanf("%f", lista [i].preco);
		fflush (stdin);	// fun��o usada para limpar bufer do teclado (remove lixo na mem�ria do teclado);		
		printf ("Digite a descri��o do produto %d: \n", i);
		gets (lista[i].descr);
		fflush (stdin);		
	}
}
