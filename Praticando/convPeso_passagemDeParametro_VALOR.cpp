#include <stdio.h>
#include <stdlib.h>
// Passagem de par�metro por valor
/* Na passagem de par�metro por valor, o valor "5" declarado na vari�vel "quilo = 5", 
� copiado para o par�metro "q" declarado na cria��o da fun��o "convPeso (float q)"*/

float convPeso(float q){
	float g = q * 1000;
	return g;
}
int main (){
	float quilo = 5;
	float pes = convPeso(quilo);
	printf("Gramas: %f", pes);
}
