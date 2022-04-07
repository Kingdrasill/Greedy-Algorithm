#include "Matriz.h"

void Inicializar(Matriz *Matriz, PosicaoAtual *PosicaoAtual, Valores *Valores, int size) {
    srand(time(0));
    
    Valores->vet = (int *)malloc((size*size)* sizeof(int));
    Valores->cont = 0;
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
    Valores->vet[Valores->cont] = Matriz->matriz[0][0].valor;
    Valores->cont++;
}

void Executar(Matriz *Matriz, PosicaoAtual *PosicaoAtual, Valores *Valores, int size) {
    int x = PosicaoAtual->coluna;
    int y = PosicaoAtual->linha; 

    Matriz->matriz[y][x].passado = true;
    
    int valorA = -1;
    int valorP = -1;
    int valorE = -1;

    if(!(y == (size - 1))) {
        if(((x-1) >= 0) && !Matriz->matriz[y][x-1].passado)
            valorA = Matriz->matriz[y][x-1].valor;

        if(((x + 1) < size) && !Matriz->matriz[y][x+1].passado)
            valorP = Matriz->matriz[y][x+1].valor;

        valorE = Matriz->matriz[y+1][x].valor;

        if(valorA > valorP && valorA > valorE) {
            PosicaoAtual->coluna--;
            PosicaoAtual->soma += valorA;
            Valores->vet[Valores->cont] = valorA;
            Valores->cont++;
        } else if(valorP >= valorA && valorP > valorE) {
            PosicaoAtual->coluna++;
            PosicaoAtual->soma += valorP;
            Valores->vet[Valores->cont] = valorP;
            Valores->cont++;
        } else {
            PosicaoAtual->linha++;
            PosicaoAtual->soma += valorE;
            Valores->vet[Valores->cont] = valorE;
            Valores->cont++;
        }
    } else {
        PosicaoAtual->soma += Matriz->matriz[y][(x + 1)].valor;
        PosicaoAtual->coluna++;
         Valores->vet[Valores->cont] = Matriz->matriz[y][(x + 1)].valor;
        Valores->cont++;
    }
}

void ImprimirValores(Valores *V) {
    for(int i=0; i<V->cont; i++)
        printf("%d -> ", V->vet[i]);
}

void ImprimirValoresReverso(Valores *V) {
    for(int i=V->cont; i>0; i--)
        printf("%d -> ", V->vet[i-1]);
}