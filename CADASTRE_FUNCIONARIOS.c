#include<stdio.h>
#include<locale.h>
#include<string.h>
char nome[3][30];
int salario[3];
int vt[3];
int vr[3];
int bruto[3];
int opcao[3];
int n;
main(void){
	setlocale(LC_ALL,"");
   for (n=1; n<=3; n++ ){
   
	
	printf("Digite o nome do funcionário:\n");
	fgets(nome[n],30,stdin);
	fflush (stdin);
	printf("Digite o salário:\n");
	scanf("%i",&salario[n]);
	fflush (stdin);
	printf("Digite o valor do vale transporte:\n");
	scanf("%i",&vt[n]);
	fflush (stdin);
	printf("Digite o valor do vale refeição:\n");
	scanf("%i",&vr[n]);
	fflush (stdin);
	bruto[n]=salario[n]+vt[n]+vr[n];
	system("cls");
	if (bruto[n]<3000){
		printf("Parabéns! Voce recebeu um benefício para funcionários no valor de R$250,00\n ");
		bruto[n]=bruto[n]+250;
		printf("Salário bruto atualizado é:%.2i \n",bruto[n]);
     		

    printf("Parabéns! Você tem direito a um lanche grátis.\n");
	printf("1-Churros\n 2-Hamburguer\n 3-Sushi\n 4-Pizza \n 5-Não quero\n");

	scanf("%i",&opcao[n]);
	
		switch (opcao[n]){
		case 1:
		    printf("Você escolheu um maravilhoso churros!\n");
			break;
		case 2:
			printf("Você esolheu um maravilhoso hamburguer!\n");
			break;
		case 3:
			printf("Você escolheu um maravilhoso sushi!\n");
			break;
		case 4:
			printf("Você escolheu uma maravilhoso pizza!\n");
			break;
		case 5:
			printf("Você optou por não adquirir o benefiício.\n");
			break;
		default:
			printf("Opção inválida\n");
		
	}
	}
}
	
	system("cls");
	for (n=1; n<=3; n++ ) {
	printf("Cadastro realizado com sucesso.\n");
	printf("Nome cadastrado:%c \n Salário: %.2i \n Vale transporte: %.2i \n Vale refeição: %.2i \n",nome[n],salario[n],vt[n],vr[n]);
	printf("Valor bruto é:%.2i \n",bruto[n]);
}

}
