#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <time.h>

typedef struct PosicaoAtual PosicaoAtual;
typedef struct Numero Numero;
typedef struct Matriz Matriz;
typedef struct Valores Valores;

struct PosicaoAtual{
    int coluna;
    int linha;
    int soma;
};

struct Numero {
    int valor;
    bool passado;
};

struct Matriz{
    Numero **matriz;
};

struct Valores{
    int *vet;
    int cont;
};

void Inicializar(Matriz *Matriz, PosicaoAtual *PosicaoAtual, Valores *Valores, int size);
void Executar(Matriz *Matriz, PosicaoAtual *PosicaoAtual, Valores *Valores, int size);
void ImprimirValores(Valores *Valores);
void ImprimirValoresReverso(Valores *Valores);