#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void flush_in();
void buscar(char *sequencia);


int main (){
    char op; 
    char *sequencia = malloc(10*sizeof(char)); 
    
    do{
        // system("cls");
        printf("---------------------------------\n");
        printf("- Bases Nitrogenadas => A U C G -\n");
        printf("---------------------------------\n");
        printf("- Digite a sequencia: ");
        gets(sequencia);

        printf("- Buscando: %s ...", sequencia);

        buscar(sequencia);

        free(sequencia);

        printf("\nDeseja efetuar uma nova analise (s) ou (n)?\n-> ");
        
        scanf("%c", &op);
        // printf("\nop - %c.", op);
        flush_in();
        system("cls");
    } while (op!='n' && op != 'N');
    
    return 0;
}

void flush_in() {
    int ch;
    do {
        ch = fgetc(stdin);
    } while (ch != EOF && ch != '\n');
}

void buscar(char *sequencia){
    int tam=0, a=0, b, c, d, ocAux=0, ocorrencia=0;
    
    tam = strlen(sequencia);
    
    char *sequenciaAux = malloc(10*sizeof(char));
    char *rna=malloc(10000001*sizeof(char));
    char x;

    FILE *sarsCov2;
    // FILE *log;  
    
    printf("...");

    sarsCov2 = fopen("sars-cov-2-win.txt", "a+");
    // log = fopen("registro.txt", "a+");
    do{
		x = fgetc(sarsCov2);
		if(x !='\n'){
			rna[a]=x;
            // fputc(x, log);		
			a++;
		}
	}while(x != EOF);

    fclose(sarsCov2);
    // fclose(log);

    for(b=0; b<a; b++){
		for(c=0, d=b; c<tam; c++, d++){
			sequenciaAux[c] = rna[d];
		}
        for(ocAux=0, c=0;c<tam;c++){
            if(sequencia[c] == sequenciaAux[c]){
                ocAux++;
            }
            if (ocAux == tam){
                ocorrencia++;   
            }
        }
        // O codigo comentado a seguir não funciona;
        // printf("\nSq-aux: %s - Sq-org: %s", sequenciaAux, sequencia);
        // if( strcmp(sequencia, sequenciaAux) == 0){
        //     // printf("%s = %s \n", sequenciaAux, sequencia);
        //     ocorrencia++;
        // }
    }

    printf("\n- Total de ocorrencias: %i .\n", ocorrencia);
    free(rna);
    free(sequencia);
    free(sequenciaAux);
}