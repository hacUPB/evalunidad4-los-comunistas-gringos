#ifndef PRIMO_H_
#define PRIMO_H_

#include <stdio.h>

typedef struct Primo
{
    char Nombre;
} Primo;


Primo* newPrimo();
void Primo_Ctor(Primo* this, char* nombre);
void Primo_Dtor(Primo* this);
int Retirar_Dinero(Primo* this, int cantidad);

#endif