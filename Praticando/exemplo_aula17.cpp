#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
	float notas[4];
	int i;
	for (i=0; i<4; i++){
		printf ("Insira a nota %d. \n", i+1);
		scanf ("%f", &notas[i]);
	}
}
