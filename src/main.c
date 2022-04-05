#include "Matriz.h"

int main() {
    bool cont = true;
    Matriz M;
    PosicaoAtual P;
    int size;

    printf("Valor de N:" );
    scanf("%d", &size);

    Inicializar(&M, &P, size);

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
            Executar(&M, &P, size);
        }
        else 
            cont = false;
    }

    printf("\nSoma: %d", P.soma);
}