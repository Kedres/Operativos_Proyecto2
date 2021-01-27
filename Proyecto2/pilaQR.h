#ifndef PROYECTO2_PILAQR_H
#define PROYECTO2_PILAQR_H

#include <stdio.h>
#include <stdlib.h>

struct nodoQR{
    char* nombreQR;
    struct  nodoQR* sig;
};

struct pilaQR{
    struct nodoQR *cabeza, *actual;
};

int tamanioPila;

struct nodoQR* crearNodoQR(char* nombreQR);
struct pilaQR* crearPila();
void pushQR(struct pilaQR* pila, char* nombreQR);
void popQR(struct pilaQR* pila);

#endif //PROYECTO2_PILAQR_H
