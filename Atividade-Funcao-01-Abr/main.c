#include "pilha.h"
#define MAX 4


int main(){
    int op = 7, valor, retorno; 

    // pilha = (Pilha *) malloc (sizeof(Pilha));
    INICIAR_PILHA();


    do{
        printf("\n#### Atividade Funcao ####\n");
        printf("Digite o numero correspondente a opao desejada, e tecle enter!\n");
        printf("1 - Inserir dados na pilha\n");
        printf("2 - Inserir dados na fila\n");
        printf("3 - Remover dados da pilha\n");
        printf("4 - Remover dado da fila\n");
        printf("5 - Visualizar os dados da pilha\n");
        printf("6 - Visualizar os dados da fila\n");
        printf("0 - Sair\n");
        scanf("%i", &op);
        switch (op){
            case 1:
                printf("\nValor:");
                scanf("%i", valor);
                teste();
                retorno = PUSH(valor);

                if(retorno == -1){
                    printf("Pilha Cheia!");
                }else{
                    printf("Valor inserido [%i]", retorno);
                }

                VIEW_LIFO(pilha);
                break;
            case 2:
                printf("\nPassei aqui 2");
                break;
            case 3:
                printf("\nPassei aqui 3");
                break;
            case 4:
                printf("\nPassei aqui 4");
                break;
            case 5:
                printf("\nPassei aqui 5");
                break;
            case 6:
                printf("\nPassei aqui 6");
                break;
            case 0:
                printf("\nSaindo..");
                _sleep(300);
                break;
            default:
                printf("\nOpcao invalida!");
        }

    }while(op != 0);
    
    return 0;
}