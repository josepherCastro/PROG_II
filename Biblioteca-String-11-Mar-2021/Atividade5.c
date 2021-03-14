#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (){
    char *plv1 = malloc(30*sizeof(char));
    char *plv2 = malloc(30*sizeof(char));
    char *plv3 = malloc(30*sizeof(char));
    char *plvConcatenada = malloc(90*sizeof(char));
    int cont=0;

    printf("Digite um valor inteiro:\n");
    scanf("%i", &cont);
    getchar();
    
    printf("Digite 3 palavras:\n");
    printf("1 -> ");
    gets(plv1);
    printf("2 -> ");
    gets(plv2);
    printf("3 -> ");
    gets(plv3);

    printf("\nConcatenado: ");

    strncat(plvConcatenada, plv1, cont);
    strncat(plvConcatenada, plv2, cont);
    strncat(plvConcatenada, plv3, cont);

    printf("%s", plvConcatenada);
    
    return 0;
}
