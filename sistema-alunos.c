#include<stdio.h>
#include<locale.h>
main(void){
	setlocale(LC_ALL,"");
	char nome[3];
    int matricula[3];
    int n1 [3];
    int n2 [3];
    int n3 [3];
    int n4 [3];
    int media[3];
	int n=1;
	
	for(n=1;n<=3;n++){
		printf("Digite o nome do aluno(a):\n");
		scanf("%c",&nome[n]);
		fflush(stdin);
		printf("Digite o número da matricula:\n");
		scanf("%i",&matricula[n]);
		fflush(stdin);
		printf("Digite a 1°Nota:");
		scanf("%i",&n1[n]);
		fflush(stdin);
		printf("Digite a 2°Nota:");
		scanf("%i",&n2[n]);
		fflush(stdin);
		printf("Digite a 3°Nota:");
		scanf("%i",&n3[n]);
		fflush(stdin);
		printf("Digite a 4°Nota:");
		scanf("%i",&n4[n]);
		fflush(stdin);
		media[n]=(n1[n]+n2[n]+n3[n]+n4[n])/4;
	}
	
	system("cls");
	
	if (media [n]>=7){
		printf("Aprovado(a)");
	}
	else{
		printf("reprovado(a)");
	}
	
	
	for (n=1;n<=3;n++){
		printf("Aluno(a): %c \n",nome[n]);
		fflush(stdin);
		printf("Matrícula: %i \n",matricula[n]);
		fflush(stdin);
		printf("Média:%i \n",media[n]);
	}
}
