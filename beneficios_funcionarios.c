#include<stdio.h>
#include<locale.h>
#include<string.h>
char nome;
float salario,vt,vr,bruto;
int opcao;
main(void){
	setlocale(LC_ALL,"");
	printf("Digite o nome do funcion�rio:");
	scanf("%c",&nome);
	fflush (stdin);
	printf("Digite o sal�rio:");
	scanf("%f",&salario);
	fflush (stdin);
	printf("Digite o valor do vale transporte:");
	scanf("%f",&vt);
	printf("Digite o valor do vale refei��o:");
	scanf("%f",&vr);
	bruto=salario+vt+vr;
	system("cls");
	if (bruto<3000){
		printf("Parab�ns! Voce recebeu um benef�cio para funcion�rios no valor de R$250,00\n ");
		bruto=bruto+250;
		printf("Sal�rio bruto atualizado �:%.2f \n",bruto);
     		

    printf("Parab�ns! Voc� tem direito a um lanche gr�tis.\n");
	printf("1-Churros\n 2-Hamburguer\n 3-Sushi\n 4-Pizza \n 5-N�o quero\n");

	scanf("%i",&opcao);
	
		switch (opcao){
		case 1:
		    printf("Voc� escolheu um maravilhoso churros!");
			break;
		case 2:
			printf("voc� esolheu um maravilhoso hamburguer!");
			break;
		case 3:
			printf("Voc� escolheu um maravilhoso sushi!");
			break;
		case 4:
			printf("Voc� escolheu uma maravilhoso pizza!");
			break;
		case 5:
			printf("Voc� optou por n�o adquirir o benefi�cio.");
			break;
		default:
			printf("Op��o inv�lida");
		
	}
	}
	
	system("cls");
	printf("Cadastro realizado com sucesso.\n");
	printf("Nome cadastrado:%c \n Sal�rio: %.2f \n Vale transporte: %.2f \n Vale refei��o: %.2f \n",nome,salario,vt,vr);
	printf("Valor bruto �:%.2f",bruto);

}
