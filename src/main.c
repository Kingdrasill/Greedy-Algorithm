#include "Matriz.h"

int main() {
    bool cont = true;
    Matriz M;
    PosicaoAtual P;
    Valores V;
    int size;

    printf("Valor de N:" );
    scanf("%d", &size);

    Inicializar(&M, &P, &V, size);

    for(int i=0; i<size; i++)
    {
        for(int j=0; j<size; j++)
        {
            printf(" %d ", M.matriz[i][j].valor);
        }
        printf("\n");
    }

    while(cont) {
        if(!(P.coluna == (size - 1)  && P.linha == (size - 1))){
            Executar(&M, &P, &V, size);
        }
        else 
            cont = false;
    }

    printf("\nValores passados: ");
    ImprimirValores(&V);
    printf("\n");

    printf("\nValores passados em ordem reversa: ");
    ImprimirValoresReverso(&V);
    printf("\n");

    printf("\nSoma: %d\n", P.soma);
}