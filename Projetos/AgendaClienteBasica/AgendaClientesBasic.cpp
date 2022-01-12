#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#define TAM 10 

struct agenda
{   
    int codigo;
    char nome[100];
    char telefone[15];
    char email[100];
};

int main() {
    setlocale(LC_ALL, "Portuguese");
	struct agenda cadastro[TAM];
    int opcao, cont, codAuto;
    cont = 0;
    codAuto = 0;
    opcao = -1;
    while (opcao != 0){
        	printf("================================\n");
        	printf("|  AGENDA CLIENTES |\n");
        	printf("================================\n");
        	printf("ESCOLHA UMA OPÇÃO: \n");
        	printf("1-Insira um novo cadastro. \n");
        	printf("2-Mostrar todos os cadastros. \n");
        	printf("0-Encerrar Programa. \n");
        	scanf("%d", &opcao);
        	system ("cls");
        	fflush (stdin);
        	
        if (opcao == 0){
        	printf("====================================\n");
        	printf ("*       FIM DO PROGRAMA !          *\n");
            printf("====================================\n\n");
		}
        if (opcao == 1){
            if (cont <= 4){
	            	cadastro[cont].codigo = ++codAuto;
	                printf("Digite seu nome: \n");
	                scanf("%s", cadastro[cont].nome);
	        		fflush (stdin);
	                printf("Digite seu telefone: \n");
	                scanf("%s", cadastro[cont].telefone);
	              	fflush (stdin);  
	                printf("Digite seu email: \n");
	                scanf("%s", cadastro[cont].email);
	                fflush (stdin);
	                system ("cls");
	                cont++;
	        }
			else{
               	printf("================================\n");
               	printf("       Agenda Lotada !\n");
               	printf("================================\n\n");
           	}
        }
        
        if(opcao == 2){
        	if (cont == 0) {
            	printf("================================\n");
                printf("   Nenhum registro cadastrado !\n");
                printf("================================\n\n");
             }
			 else{
            	for (int i = 0; i < cont; i++){
					printf("================================\n");
                    printf("Código: %d\n", cadastro[i].codigo );
                    printf("Nome: %s\n", cadastro[i].nome );
                    printf("Telefone: %s\n", cadastro[i].telefone );
                    printf("E-mail: %s\n", cadastro[i].email );
                    printf("================================\n\n");
                }
            }
        }
		if (opcao <0 || opcao >2 ){
        	printf("================================\n");
            printf(" !!!  Erro: Opção inválida  !!!\n");
            printf("================================\n\n");
		}
    }
    return 0;
}
