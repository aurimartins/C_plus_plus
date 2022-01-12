// Algoritmo criado para explicar a declaração de uma função (convertePeso)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
float convertePeso (float quilos){
	float gramas;
	gramas = quilos * 1000;
	return gramas;
}
int main (){
	float qui, gra;
	printf("Digite o peso em quilos: \n");
	scanf("%f",&qui);
	gra = convertePeso(qui);
	printf("O peso é de %1f gramas. \n",gra);
}
