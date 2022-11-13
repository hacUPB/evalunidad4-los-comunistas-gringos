#ifndef PRIMO_H_
#define PRIMO_H_

#include <stdio.h>

typedef struct Primo
{
    char Nombre;

} Primo;

Primo *newPrimo();
void Primo_Ctor(char *);
void Primo_Dtor(Primo *);
int Retirar_Dinero(int cantidad);

#endif