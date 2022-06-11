#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
char opcao ='s';
int rg;
char nome[50];
char endereco[50];
main (void){
	setlocale(LC_ALL,"Portuguese");
	 while (opcao =='s'){
		printf("Informe seu nome completo :\n ");
		fgets(nome,50,stdin);
		fflush(stdin);
		
		printf("Digite seu rg:\n");
		scanf("%i",&rg);
		fflush(stdin);
		
		printf("Informe seu endereço:\n");
		fgets(endereco,50,stdin);
		fflush(stdin);
		 
		system("cls");
		
	    printf("Emissão de Declaração de Passe estudantil\n");
		printf("Nome: %s \n ",nome);
		printf("Registro: %i \n",rg);
		printf("Endereço: %s \n",endereco);
			
		printf("Deseja realizar outro cadastro?[s] ou [n]");
		scanf("%c",&opcao);
		
		system("cls");
	
	}
	return 0;
}
