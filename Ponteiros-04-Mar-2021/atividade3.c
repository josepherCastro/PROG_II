#include <stdio.h>
#include <stdlib.h>

int main(){

    int tam1, tam2, tam3,i, j;
    char *pont_tam1, *pont_tam2, *pont_tam3;


    printf("\nDigite o tamanho da palavra: ");
    scanf(" %i %i", &tam1, &tam2);

    pont_tam1 = malloc(tam1 * sizeof(char));

    pont_tam2 = malloc(tam2 * sizeof(char));


    printf("\nDigite a primeira palavra: ");
    __fpurge(stdin);
    gets(pont_tam1);

    printf("\nDigite a segunda palavra: ");
    __fpurge(stdin);
    gets(pont_tam2);

    tam3=tam1+tam2+1;

    pont_tam3 = malloc(tam3 * sizeof(char));

    for(i=0;pont_tam1[i]!='\0';i++){
        pont_tam3[i]=pont_tam1[i];
    }

    pont_tam3[i]='-';
    i++;

    for(j=tam1+1, i=0;pont_tam2[i]!='\0';j++, i++){
        pont_tam3[j]=pont_tam2[i];
    }

    printf("\n%s", pont_tam3);

    printf("\n\n");

return 0;
}