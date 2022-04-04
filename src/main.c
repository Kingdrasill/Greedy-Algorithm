#include "Matriz.h"

int main() {
    Matriz M;
    PosicaoAtual P;

    Inicializar(&M, &P);

    for(int i=0; i<MAX_SIZE; i++)
    {
        for(int j=0; j<MAX_SIZE; j++)
        {
            printf(" %d ", M.matriz[i][j].valor);
        }
        printf("\n");
    }

    printf("\n%d\n", M.matriz[P.linha][P.coluna].valor);
    
    printf("\n%d\n", M.matriz[P.linha][P.coluna+1].valor);
    
    printf("\n%d\n", M.matriz[P.linha+1][P.coluna].valor);
}