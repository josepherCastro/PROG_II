#include <stdio.h>
#include <stdlib.h>

int main(){

    int tam1, i, j;
    char *pont_tam1, *pont_tam2;


    printf("\nDigite o tamanho da palavra: ");
    scanf(" %i", &tam1);

    pont_tam1 = malloc(tam1 * sizeof(char));

    pont_tam2 = malloc(tam1 * sizeof(char));


    printf("\nDigite  palavra: ");
    __fpurge(stdin);
    gets(pont_tam1);


    for(i=0, j=tam1-1; pont_tam1[i]!='\0'; i++, j--){
        pont_tam2[i]=pont_tam1[j];
    }

    printf("\n%s", pont_tam2);

    printf("\n\n");

return 0;
}
