#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int disponible = 400;
pthread_mutex_t locked;

char * carlos, juan;
carlos = "Carlos";
juan = "Juan";


void* mover_dinero(char* persona){
    //for(cantidad de transacciones que vayamos a simular)
    pthread_mutex_lock(&locked);

    int movimiento = rand()%101;

    if(strcmp(persona, carlos) || strcmp(persona, juan))
    {
        if(disponible <700)
        {
            disponible += movimiento;
            print("Persona ha retirado movimiento de la cuenta");
        }
        else
        {
            print("No hay dinero para realizar el retiro");
        }
    }
    else
    {
        if(disponible>movimiento)
        {
            disponible -= movimiento;
            print("Persona ha consignado movimiento a la cuenta");
        }
        else
        {
            print("La cuenta ha alcanzado su tope, no se pudo realizar el depósito");
        }
    }
    pthread_mutex_unlock(&locked);

    //se cierra el for
}

int main(int argc, char argv[])
{

    Print("Simulacion de una cuenta familiar durante X cantidad de transacciones");

    if(pthread_mutex_init(&locked, NULL) != 0)
    {
        printf("No salió mi papá, acuéstese a llorar");
        exit(1);
    }

    pthread_t id1, id2, id3, id4;
    pthread_create(&id1, NULL, mover_dinero, "Juan");
    pthread_create(&id2, NULL, mover_dinero, "Carlos");
    pthread_create(&id3, NULL, mover_dinero, "Sebastián");
    pthread_create(&id4, NULL, mover_dinero, "Alejandro");

    pthread_join(id1, NULL);
    pthread_join(id2, NULL);
    pthread_join(id3, NULL);
    pthread_join(id4, NULL);

    //Print("Simulación finalizada")

    exit(0);

}