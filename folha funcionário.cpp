#include<stdio.h>
#include<locale.h>
#include<string.h>
char nome;
float salario,vt,vr,bruto;
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
	if (bruto<3000){
		printf("Parabéns! Voce recebeu um benefício para funcionários no valor de R$2.500,00\n ");
		printf("Valor bruto é:%.2f + R$2.500,00 \n",bruto);
	}
	printf("Nome cadastrado:%c \n Salário: %.2f \n Vale transporte: %.2f \n Vale refeição: %.2f \n",nome,salario,vt,vr);
	printf("Valor bruto é:%.2f",bruto);

}
