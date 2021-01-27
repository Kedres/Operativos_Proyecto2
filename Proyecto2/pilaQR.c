#include "pilaQR.h"
#include <string.h>
#include <stdlib.h>

struct nodoQR* crearNodoQR(char* nombreQR){
    struct nodoQR* nodoTemp = (struct nodoQR*) malloc(sizeof(struct nodoQR));

    nodoTemp->nombreQR = nombreQR;
    nodoTemp->sig = NULL;
    return nodoTemp;
}

struct pilaQR* crearPila(){
    struct pilaQR* pilaTempQR = (struct pilaQR*) malloc(sizeof(struct pilaQR));
    pilaTempQR->cabeza = pilaTempQR->actual = NULL;
    tamanioPila = 0;
    return pilaTempQR;
}

void pushQR(struct pilaQR* pila, char* nombreQR){
    struct nodoQR* nodoTemp = crearNodoQR(nombreQR);

    if(pila->actual == NULL){
        pila->cabeza = pila->actual = nodoTemp;
        tamanioPila = 1;
        return;
    }

    pila->actual->sig = nodoTemp;
    pila->actual = nodoTemp;
    tamanioPila = tamanioPila + 1;
}
void popQR(struct pilaQR* pila){
    if(pila->cabeza == NULL){
        return;
    }
    struct  nodoQR* temp = pila->cabeza;

    pila->cabeza = pila->cabeza->sig;

    if(pila->cabeza == NULL){
        pila->actual = NULL;
    }

    free(temp);
    tamanioPila = tamanioPila - 1;
}