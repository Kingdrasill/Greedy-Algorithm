#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

typedef struct PosicaoAtual PosicaoAtual;
typedef struct Numero Numero;
typedef struct Matriz Matriz;

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

void Inicializar(Matriz *Matriz, PosicaoAtual *PosicaoAtual, int size);
void Executar(Matriz *Matriz, PosicaoAtual *PosicaoAtual, int size);