#include <stdio.h>
#include <locale.h>
#include <string.h>
char nome;
float np1, np2,soma,divisao,multiplicacao, subtracao;

int main(void)
{
    printf("Digite o nome do usuário\n");
    scanf("%c",&nome);
    printf("Digite o primeiro valor:\n");
    scanf("%f",&np1);
    printf("Digite o segundo valor:\n");
    scanf("%f",&np2);
    soma=np1+np2;
    subtracao=np1-np2;
    multiplicacao=np1*np2;
    divisao=np1/np2;
    printf("Soma: %.2f \n Subtração: %.2f\n Multiplicação: %2.f \n Divisão:%2.f",soma,subtracao,multiplicacao,divisao);
    return 0;
}
