#include <stdio.h>
#include <string.h>
#include <locale.h>

char nome[20];
int idade;
float salario;
main(void){
	setlocale(LC_ALL,"Portuguese");
	printf("Digite o nome do estagiário(a): ");
	scanf("%s",&nome);
	printf(" Digite a idade do estagiário(a) :");
	scanf("%i",&idade);
	printf("Digite o salário do estagiário(a) :");
	scanf("%f",&salario);
	
	printf("Estágiario(a):%s \n  Idade:%i \n  Salário: %.2f ",nome,idade,salario);

	
}

