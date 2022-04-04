#include "Matriz.h"

void Inicializar(Matriz *Matriz, PosicaoAtual *PosicaoAtual) {
    srand(0);

    for(int i=0; i<MAX_SIZE; i++)
    {
        for(int j=0; j<MAX_SIZE; j++)
        {
            Matriz->matriz[i][j].valor = rand()%100;
            Matriz->matriz[i][j].passado = false;
        }
    }

    PosicaoAtual->linha = 0;
    PosicaoAtual->coluna = 0;
    PosicaoAtual->soma = 0;
}