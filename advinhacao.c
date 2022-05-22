#include<stdio.h>
#include <string.h>
#include <locale.h>
#define NUMERO_DE_TENTATIVAS 3

int main(){
    setlocale(LC_ALL,"Portuguese");
    //imprime cabecalho jogo
    printf("**************************************\n");
    printf("*Bem vindo ao jodo de advinhacao* \n");
    printf("***************************************\n");
    int numerosecreto= 42;
    
    int chute;
    double pontos= 1000;
    

    int nivel;
    printf("Qual o nível de dificuldade?\n");
    printf("(1) Fácil (2) Médio (3) Difícil\n\n");
    printf("Escolha:");
    scanf("%d",&nivel);
    int numerodetentativas;
    switch (nivel)
    {
    case 1:
        numerodetentativas=20;
        break;
        
    case 2:
       numerodetentativas=15;
       break;
    default:
       numerodetentativas=6;
       break;
    }
    //declarar variável impor e especificar
    for (int i=1; i<=NUMERO_DE_TENTATIVAS;i++){
        printf("Tentativas %d de %d\n",i,NUMERO_DE_TENTATIVAS);
    
        printf("Qual é o seu chute?\n");

        scanf("%d",&chute);
        printf("seu chute foi %d \n",chute);
        if (chute<0) {
            printf("Você não pode chutar números negativos\n");
            i--;
            continue;
        }
        
        int acertou = (chute==numerosecreto);
        int maior =(chute>numerosecreto);

        if (acertou) {
            printf("Parabéns, você acertou!\n");
            printf("Jogue de novo, você é um bom jogador!\n");
            //for parar de executar.
           break;;
        }
        else  {
           
            if (maior){
                printf("Seu chute foi maior que o número secreto\n");
            }
            else {
                printf("Seu chute foi menor que o número secreto\n");
            }
            
            printf("Você errou!\n");
            printf("Mas não desanime, tente novamente!");
             
        }
        
      double pontosperdidos= (chute-numerosecreto)/2.0;
      if (pontosperdidos<0)  {
          pontosperdidos = pontosperdidos * -1;
      }
      
      pontos= pontos - pontosperdidos;
    }

     printf("Fim de jogo!\n");
    
    printf("Total de pontos:%.1f\n",pontos);
}