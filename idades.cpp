#include <stdio.h>
#include <string.h>
#include <locale.h>
int idade1,idade2;
main (void){
	setlocale(LC_ALL,"Portuguese");
	printf("digite a primeira idade:\n");
	scanf("%i",&idade1);
	printf("digite a segunda idade:\n");
	scanf("%i",&idade2);
	
	if ( idade1==idade2 ) {  
		printf("as idades s�o iguais");
	}	else{
		if (idade1>idade2){
			printf("a 1� pessoa � mias velha");
		}
		else{
			printf("a 2� pessoa � mais velha");
		}
	}
}
