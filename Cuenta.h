#ifndef CUENTA_H_
#define CUENTA_H_

#include <stdio.h>

typedef struct Cuenta
{
    int Disponible;
} Cuenta;


void Cuenta_Ctor(int inicial);
void Cuenta_Dtor(Cuenta *);
void Funcionando();

#endif