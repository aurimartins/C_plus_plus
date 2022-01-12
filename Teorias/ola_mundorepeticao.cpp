#include <stdio.h>
#include<stdlib.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL, "Portuguese");
	
	int i;
	for ( i=0; i<10; i++){
		printf (" Olá Mundo! \n");
	}
}

