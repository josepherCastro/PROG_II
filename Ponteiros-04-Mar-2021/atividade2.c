#include <stdio.h>
#include <stdlib.h>

int main(){

    int valor1, valor2, soma;
    int  *pont_va1, *pont_va2;

    printf("\nDigite dois valores inteiros: ");
    scanf(" %i %i", &valor1, &valor2);

    pont_va1 = &valor1;
    pont_va2 = &valor2;

    soma = *pont_va1 + *pont_va2;

    printf("\n- Soma: %i", soma);

    printf("\n\n");

return 0;
}