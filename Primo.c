#include <stdio.h>
#include "Primo.h"
#include <stdlib.h>

Primo* newPrimo()
{
    return(Primo*)malloc(sizeof(Primo));
}

int Retirar_Dinero(int *cantidad)
{
    //disponible _ restatar
    /*int i, n;
    time_t t; 

    n = 1;

    srand((unsigned) time(&t));

    for(i = 1; i<n; i++){
      
    }
      */int valor = rand()%101;

      cantidad = cantidad - valor;
      
    return cantidad;
}
