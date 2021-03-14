#include <stdio.h>
#include <stdlib.h>

double fatorial(int fato);	

int main(){

	int num;
	double fato;

	printf("\nDigite um valor inteiro: ");
	scanf("%i", &num);


	fato = fatorial(num);

	printf("\nFatorial: %.0lf", fato);

	printf("\n\n");

	return 0;
}

double fatorial(fato){
	double result=1;
	
	while (fato>1){
		result=result*fato;
		fato--;
	}
	return result;	
}