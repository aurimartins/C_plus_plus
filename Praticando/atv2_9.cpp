#include <stdio.h>
#include <stdlib.h>
int main(){
        int cont;
		float x;
    	scanf("%f", &x);
    	
    	for(cont=1;cont<=3;cont++){
        	x = x/2;
    	}
    	printf("%0.0f", x);
 	}
