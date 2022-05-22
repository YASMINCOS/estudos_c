#include <locale.h>
#include <stdio.h>
#include <string.h>
float p1 , p2;
int main(void){
    setlocale(LC_ALL,"Portuguese");
	printf("Digite primeira nota:");
    scanf ("%f",&p1);
	printf("Digite segunda nota:");
    scanf ("%f",&p2);
	printf("notas:\n N1=%.2f e N2=%2.f",p1,p2 );
	return 0;
	
	
	
}
