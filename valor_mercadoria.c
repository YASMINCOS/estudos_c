#include<stdio.h>
#include <string.h>
#include<locale.h>
char nome;
int valor;
int main(void)
{
    setlocale(LC_ALL,"");
    printf("Digite o nome do funcionário(a)");
    scanf("%c",&nome);
    printf("Digite o valor da mercadoria:");
    scanf("%i",&valor);

    if ( (valor >= 0) && (valor<=30))
    {
        printf("Barato!Autorizado a compra");
    }
    else{
        if ((valor>=31) && (valor<=90))
        {
            printf("Taxa alta! Atenção");
        }
        else{
            if ((valor>=91) && (valor<=100))
            {
                printf ("Não há subsídio para a compra da mercadoria. Não autorizado!");
            }
            
        }
        
    }
    return 0;
}
