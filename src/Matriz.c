#include "Matriz.h"

void Inicializar(Matriz *Matriz, PosicaoAtual *PosicaoAtual, int size) {
    srand(0);
    
    Matriz->matriz = (Numero **)malloc(sizeof(Numero *)*size);
	for(int i=0; i<size; i++)
		Matriz->matriz[i] = (Numero *)malloc(sizeof(Numero)*size);
	
    for(int i=0; i<size; i++)
    {
        for(int j=0; j<size; j++)
        {
            Matriz->matriz[i][j].valor = rand()%100;
            Matriz->matriz[i][j].passado = false;
        }
    }

    PosicaoAtual->coluna = 0;
    PosicaoAtual->linha = 0;
    PosicaoAtual->soma = Matriz->matriz[0][0].valor;
}

void Executar(Matriz *Matriz, PosicaoAtual *PosicaoAtual, int size) {
    if(!(PosicaoAtual->linha == (size - 1))) {

    } else {
        PosicaoAtual->soma += Matriz->matriz[PosicaoAtual->linha][(PosicaoAtual->coluna + 1)].valor;
        PosicaoAtual->coluna++;
    }
}