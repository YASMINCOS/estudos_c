#include<stdio.h>
#include<locale.h>
#include<string.h>
char nome;
float salario,vt,vr,bruto;
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
	if (bruto<3000){
		printf("Parab�ns! Voce recebeu um benef�cio para funcion�rios no valor de R$2.500,00\n ");
		printf("Valor bruto �:%.2f + R$2.500,00 \n",bruto);
	}
	printf("Nome cadastrado:%c \n Sal�rio: %.2f \n Vale transporte: %.2f \n Vale refei��o: %.2f \n",nome,salario,vt,vr);
	printf("Valor bruto �:%.2f",bruto);

}
