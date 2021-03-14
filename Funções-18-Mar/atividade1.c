#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double pitagoras(int CO, int CA);	

int main(){
	int CO, CA;
	double HIP;

	printf("\nCateto Oposto: ");
	scanf(" %i", &CO);

	printf("\nCateto Adjacente: ");
	scanf(" %i", &CA);

	HIP = pitagoras(CO, CA);
	
	printf("\nHipotenusa: %.1lf", HIP);

	printf("\n\n");

	return 0;
}

double pitagoras(CO, CA){
	double HIP;
	HIP = sqrt(pow(CO,2) + pow(CA,2));	
	return HIP;
}