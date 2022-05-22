#include <stdio.h>
#include <string.h>
#include <locale.h>
char nome;
float nota1,nota2, media;
int main(void)
{
    setlocale(LC_ALL,"Portuguese");
    printf("Digite o nome do aluno(a):");
    scanf("%c",&nome);
    printf("Digite a primeira nota:");
    scanf("%f",&nota1);
    printf("Digite a segunda nota:");
    scanf("%f",&nota2);
    media=(nota2+nota1)/2;
    printf("O Aluno(a):%c obteve como media=%.2f",nome,media);
    return 0;
}
