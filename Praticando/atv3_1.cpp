//Utilizando funções (samar);

#include <stdio.h>
#include <stdlib.h>

void somar(int x, int y){
        int SOMA = 0;
	    x = x + y;
	    printf("%d", SOMA);
}
 
int main(){
    int A, B;
    printf("Digite A:\n");
    scanf("%d", &A);
    printf("Digite B:\n");
    scanf("%d", &B);
    somar(A,B);
 }
