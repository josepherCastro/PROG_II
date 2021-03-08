#include <stdio.h>
#include <stdlib.h>

int main(){

    int tam1, i, j=0;
    char *pont_tam1;


    printf("\nDigite o tamanho da palavra: ");
    scanf(" %i", &tam1);

    pont_tam1 = malloc(tam1 * sizeof(char));


    printf("\nDigite  palavra: ");
    __fpurge(stdin);
    gets(pont_tam1);


    printf("Posição impares: ");
    for(i=0; pont_tam1[i]!='\0'; i++){
        j=i%2;
        if(j==1){
            printf("%c", pont_tam1[i]);
        }
    }

    printf("\n\n");

return 0;
}