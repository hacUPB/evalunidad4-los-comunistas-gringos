#ifndef TIO_H_
#define TIO_H_

#include <stdio.h>

typedef struct Tio
{
    char Nombre;
    int Saldo;
} Tio;


void Tio_Ctor(char* nombre, int* saldo);
void Tio_Dtor(Tio *);
int Ingresar_Dinero(int cantidad);

#endif