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
   
	
	printf("Digite o nome do funcion�rio:\n");
	fgets(nome[n],30,stdin);
	fflush (stdin);
	printf("Digite o sal�rio:\n");
	scanf("%i",&salario[n]);
	fflush (stdin);
	printf("Digite o valor do vale transporte:\n");
	scanf("%i",&vt[n]);
	fflush (stdin);
	printf("Digite o valor do vale refei��o:\n");
	scanf("%i",&vr[n]);
	fflush (stdin);
	bruto[n]=salario[n]+vt[n]+vr[n];
	system("cls");
	if (bruto[n]<3000){
		printf("Parab�ns! Voce recebeu um benef�cio para funcion�rios no valor de R$250,00\n ");
		bruto[n]=bruto[n]+250;
		printf("Sal�rio bruto atualizado �:%.2i \n",bruto[n]);
     		

    printf("Parab�ns! Voc� tem direito a um lanche gr�tis.\n");
	printf("1-Churros\n 2-Hamburguer\n 3-Sushi\n 4-Pizza \n 5-N�o quero\n");

	scanf("%i",&opcao[n]);
	
		switch (opcao[n]){
		case 1:
		    printf("Voc� escolheu um maravilhoso churros!\n");
			break;
		case 2:
			printf("Voc� esolheu um maravilhoso hamburguer!\n");
			break;
		case 3:
			printf("Voc� escolheu um maravilhoso sushi!\n");
			break;
		case 4:
			printf("Voc� escolheu uma maravilhoso pizza!\n");
			break;
		case 5:
			printf("Voc� optou por n�o adquirir o benefi�cio.\n");
			break;
		default:
			printf("Op��o inv�lida\n");
		
	}
	}
}
	
	system("cls");
	for (n=1; n<=3; n++ ) {
	printf("Cadastro realizado com sucesso.\n");
	printf("Nome cadastrado:%c \n Sal�rio: %.2i \n Vale transporte: %.2i \n Vale refei��o: %.2i \n",nome[n],salario[n],vt[n],vr[n]);
	printf("Valor bruto �:%.2i \n",bruto[n]);
}

}
