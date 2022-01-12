#include <stdio.h>
#include <stdlib.h>
// Passagem de parâmetro por valor
/* Na passagem de parâmetro por valor, o valor "5" declarado na variável "quilo = 5", 
é copiado para o parâmetro "q" declarado na criação da função "convPeso (float q)"*/

float convPeso(float q){
	float g = q * 1000;
	return g;
}
int main (){
	float quilo = 5;
	float pes = convPeso(quilo);
	printf("Gramas: %f", pes);
}
