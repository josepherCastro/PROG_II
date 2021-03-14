#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (){
    char *plv1 = malloc(30*sizeof(char));
    char *plv2 = malloc(30*sizeof(char));
    char *plvAux = malloc(30*sizeof(char));
    int i=0, cont, contAux;

    printf("Digite duas palavras:\n");
    printf("1 -> ");
    gets(plv1);
    printf("2 -> ");
    gets(plv2);

    while ( plv1[i]==plv2[i] ){ i++; }

    if(strncmp(plv1, plv2, i)==0){
        strncpy(plvAux, plv1, i);
        printf("Letras Iguais - %i - %s .", i, plvAux);
    }

    return 0;
}
