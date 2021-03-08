#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int num;
    char letra;
    int *pont_num;
    char *pont_let;

    printf("\nDigite um numero inteiro e um caracter : ");
    scanf("%i %c", &num, &letra);


    pont_num = &num;
    pont_let = &letra;

    printf("\n- [Inteiro]: endereco = '%p' / conteudo = '%i' ", &pont_num, num);
    printf("\n- [Caractere]: endereco = '%p' / conteudo = '%c' ", &pont_let, letra);
    
    printf("\n\n");
    
    return 0;
}