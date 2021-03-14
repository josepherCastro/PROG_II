#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (){
    char *plv1 = malloc(30*sizeof(char));
    char *plv2 = malloc(30*sizeof(char));
    char *plv3 = malloc(30*sizeof(char));
    char *plvConcatenada = malloc(90*sizeof(char));

    printf("Digite 3 nomes:\n");
    printf("1 -> ");
    gets(plv1);
    printf("2 -> ");
    gets(plv2);
    printf("3 -> ");
    gets(plv3);

    printf("\nConcatenado: ");
    plvConcatenada = plv1;
    // strcat(plvConcatenada, plv1);
    strcat(plvConcatenada, plv2);
    strcat(plvConcatenada, plv3);
    printf("%s", plvConcatenada);
    
    return 0;
}
