#include <stdio.h>
#include <string.h>
#include <locale.h>

char nome[20];
int idade;
float salario;
main(void){
	setlocale(LC_ALL,"Portuguese");
	printf("Digite o nome do estagi�rio(a): ");
	scanf("%s",&nome);
	printf(" Digite a idade do estagi�rio(a) :");
	scanf("%i",&idade);
	printf("Digite o sal�rio do estagi�rio(a) :");
	scanf("%f",&salario);
	
	printf("Est�giario(a):%s \n  Idade:%i \n  Sal�rio: %.2f ",nome,idade,salario);

	
}

