#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (){
    char *plv1 = malloc(30*sizeof(char));
    char *plv2 = malloc(30*sizeof(char));
    char *plv3 = malloc(30*sizeof(char));

    printf("Digite 3 nomes:\n");
    printf("1 -> ");
    gets(plv1);
    printf("2 -> ");
    gets(plv2);
    printf("3 -> ");
    gets(plv3);

    printf("\nOrdem Crescente: ");
    if(strlen(plv1)<strlen(plv2) && strlen(plv1)<strlen(plv3)){
        printf("\n1 -> %s", plv1);
        if(strlen(plv2)<strlen(plv3)){
            printf("\n2 -> %s", plv2);
            printf("\n3 -> %s", plv3);
        }else{
            printf("\n2 -> %s", plv3);
            printf("\n3 -> %s", plv2);
        }   
    }else if(strlen(plv2)<strlen(plv1) && strlen(plv2)<strlen(plv3)){
        printf("\n1 -> %s", plv2);
        if(strlen(plv1)<strlen(plv3)){
            printf("\n2 -> %s", plv1);
            printf("\n3 -> %s", plv3);
        }else{
            printf("\n2 -> %s", plv3);
            printf("\n3 -> %s", plv1);
        }   
    }else{
        printf("\n1 -> %s", plv3);
        if(strlen(plv1)<strlen(plv2)){
            printf("\n2 -> %s", plv1);
            printf("\n3 -> %s", plv2);
        }else{
            printf("\n2 -> %s", plv2);
            printf("\n3 -> %s", plv1);
        }   
    }
    return 0;
}
