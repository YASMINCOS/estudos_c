#include <stdio.h>

int main(){
    int x;
    int y;
    printf("Digite o primeiro valor:");
    scanf("%d",&x);
    printf("Digite o segundo  valor:");
    scanf("%d",&y);
    
    int m=x*y;
    printf("A multiplicação de %d por %d é igual a %d",x,y,m);
}