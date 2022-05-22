#include <stdio.h>
#include <string.h>
#include<locale.h>
#include<stdlib.h> 
int np1,np2,soma,subtracao,multiplicacao,divisao;
char opcao;
int main(void)
{
    
    printf("Digite o primeiro valor");
    scanf("%i",&np1);
    printf("Digite o segundo valor");
    scanf("%i",&np2);
    
    printf("Escolha a operação \n +\n -\n *\n / \n");
    scanf("%c",&opcao);
    switch (opcao){
    case '+':
        soma=np1+np2;
        printf("O resultado da soma: %f",soma);
        
        break;
    case '-':
         subtracao=np1-np2;
        printf("Resultado subtração : %f",subtracao);
        break;
    case'*':
    multiplicacao=np1*np2;
       printf("Resultado Multiplicação: %.2f",multiplicacao);
       break;
    case'/':
       divisao=np1/np2;
       printf("Resultado da divisão: %.2f");
       break;
    default:
        printf("");
        break;
    }


}
