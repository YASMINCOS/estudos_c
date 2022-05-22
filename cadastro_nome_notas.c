#include <stdio.h>
#include <string.h>
#include<locale.h>
char nome;
float valor1,valor2,soma,subtracao,divisao,multiplicacao;
int main(void)
{
   setlocale(LC_ALL, "Portuguese");
    printf("Digite seu nome:\n");
    scanf("%s",&nome);
    printf("Digite o primeiro valor:");
    scanf("%f",&valor1);
    printf("Digite o segundo valor:");
    scanf("%f",&valor2);
    soma=valor1+valor2;
    subtracao=valor1-valor2;
    divisao=valor1/valor2;
    multiplicacao=valor1*valor2;
    printf("o valor da soma entre os números é soma=%f \n o valor da subtração entre os números é subtraçao=%f \n o valor da divisao entre os números é divisao=%.2f \n o valor da multiplicação entre os números é multiplicação=%f" ,soma,subtracao,divisao,multiplicacao);
    return 0;
}
