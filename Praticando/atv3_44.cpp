#include <stdio.h>
int main(){
int matrizA[2][10];
int i, j;
	for (i=0;i<2;i++){
		for (j=0;j<10;j++){
			printf(“Insira elemento da linha, coluna:”, i, j);
			scanf(“%d”, &matrizA[i][j]);
		}
	}
	for (i=0;i<2;i++){
		for (j=0;j<10;j++){
			printf(“O elemento da linha %d, coluna %d é: %d\n”, i, j, matrizA[i][j]);
		}
	}
	return (0);
}
