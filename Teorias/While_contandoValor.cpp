/* Usando while como laço de repetição sob efeito de uma condição */

#include <stdio.h>
#include <stdlib.h>

int main (){
	int soma=0, valor;
	while (soma <= 100){
		printf ("Digite um valor: \n");
		scanf ("%d", &valor);
		soma = soma + valor;
	}
}

