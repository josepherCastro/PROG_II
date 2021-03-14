#include <stdio.h>
#include <stdlib.h>

int primo(int valor);	

int main(){

	int v1;
	int result;

	printf("Digite um valor inteiro: ");
	scanf(" %i", &v1);

	result = primo(v1);

	if(result == 2){ 
		printf("PRIMO");
	}
	else{
		printf("NAO E PRIMO"); 
	}
	printf("\n\n");

	return 0;
}

int primo(valor){
	int result = 0;

	for (int i=1; i <= valor;i++){
		if(valor % i == 0){ 
			result++; 
		}	
	}
	return result;
}