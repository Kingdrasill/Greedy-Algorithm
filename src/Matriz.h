#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#define MAX_SIZE 7

typedef struct PosicaoAtual PosicaoAtual;
typedef struct Numero Numero;
typedef struct Matriz Matriz;

void Inicializar(Matriz *Matriz, PosicaoAtual *PosicaoAtual);

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
    Numero matriz[MAX_SIZE][MAX_SIZE];
};