#include<stdio.h>
#include<locale.h>
main(void){
	setlocale(LC_ALL,"");
	char nome[5][30];
    int viagem[5];
	int n=1;
	
	for(n=1;n<=5;n++){
		printf("Digite o destino:\n");
		gets(nome[n]);
		fflush(stdin);
		printf("Digite o preço da viagem:\n");
		scanf("%i",&viagem[n]);
		fflush(stdin);
	}
	
	system("cls");
	
	for (n=1;n<=5;n++){
		printf("Destino: %c \n",nome[n]);
		fflush(stdin);
		printf("Preço da viagem: %.2i \n",viagem[n]);
		fflush(stdin);
		system("pause");
	}
}
