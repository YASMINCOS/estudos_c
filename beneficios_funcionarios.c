#include<stdio.h>
#include<locale.h>
#include<string.h>
char nome;
float salario,vt,vr,bruto;
int opcao;
main(void){
	setlocale(LC_ALL,"");
	printf("Digite o nome do funcionário:");
	scanf("%c",&nome);
	fflush (stdin);
	printf("Digite o salário:");
	scanf("%f",&salario);
	fflush (stdin);
	printf("Digite o valor do vale transporte:");
	scanf("%f",&vt);
	printf("Digite o valor do vale refeição:");
	scanf("%f",&vr);
	bruto=salario+vt+vr;
	system("cls");
	if (bruto<3000){
		printf("Parabéns! Voce recebeu um benefício para funcionários no valor de R$250,00\n ");
		bruto=bruto+250;
		printf("Salário bruto atualizado é:%.2f \n",bruto);
     		

    printf("Parabéns! Você tem direito a um lanche grátis.\n");
	printf("1-Churros\n 2-Hamburguer\n 3-Sushi\n 4-Pizza \n 5-Não quero\n");

	scanf("%i",&opcao);
	
		switch (opcao){
		case 1:
		    printf("Você escolheu um maravilhoso churros!");
			break;
		case 2:
			printf("você esolheu um maravilhoso hamburguer!");
			break;
		case 3:
			printf("Você escolheu um maravilhoso sushi!");
			break;
		case 4:
			printf("Você escolheu uma maravilhoso pizza!");
			break;
		case 5:
			printf("Você optou por não adquirir o benefiício.");
			break;
		default:
			printf("Opção inválida");
		
	}
	}
	
	system("cls");
	printf("Cadastro realizado com sucesso.\n");
	printf("Nome cadastrado:%c \n Salário: %.2f \n Vale transporte: %.2f \n Vale refeição: %.2f \n",nome,salario,vt,vr);
	printf("Valor bruto é:%.2f",bruto);

}
