#include<stdio.h>
#include<string.h>
#include<locale.h>
int valor1,valor2,valor3;

main(void){
    setlocale(LC_ALL,"");
    printf("Digite o primeiro valor:");
    scanf("%i",&valor1);
    printf("Digite o segundo valor:");
    scanf("%i",&valor2);
    printf("Digite o terceiro valor:");
    scanf("%i",&valor3);

    if ((valor1>valor2) && (valor3>valor2) && (valor1>valor3))
    {
       printf("Maior valor é 1º= %i e o menor é o 2º=%i",valor1,valor2);
    }
     if ((valor2>valor1) && (valor3>valor1) && (valor2>valor3))
    {
       printf("Maior valor é 2º= %i e o menor é o 1º=%i",valor2,valor1);
    }
     if ((valor3>valor2) && (valor1>valor2) && (valor3>valor1))
    {
       printf("Maior valor é 3º= %i e o menor é o 2º=%i",valor3,valor2);
    }
    if ((valor1>valor2) && (valor2>valor3) && (valor1>valor3))
    {
       printf("Maior valor é 1º= %i e o menor é o 3º=%i",valor1,valor3);
    }
    if ((valor2>valor1) && (valor1>valor3) && (valor2>valor3))
    {
       printf("Maior valor é 2º= %i e o menor é o 3º=%i",valor2,valor3);
    }
    if ((valor3>valor2) && (valor2>valor1) && (valor2>valor3))
    {
       printf("Maior valor é 2º= %i e o menor é o 3º=%i",valor2,valor3);
    }
    if ((valor1==valor3)){
        printf("O 1º e 3º valor são iguais\n",valor1,valor3);
    }
    if ((valor1==valor3)){
        printf("O 2º e 3º valor são iguais\n",valor2,valor3);
    }
}