#include "Tio.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <mqueue.h>


Tio* newTio()
{
    return(Tio*)malloc(sizeof(Tio));
}



int Ingresar_Dinero(int *cantidad)
{
    //disponible _ sumar
    /*int i, n;
    time_t t; 

    n = 1;

    srand((unsigned) time(&t));

    for(i = 1; i<n; i++){
      
    }
      */int valor = rand()%101;

      cantidad = cantidad + valor;
      
    return cantidad;
}
