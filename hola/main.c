#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int disponible = 2000;
pthread_mutex_t locked;

char tio1[] = "Carlos";
char tio2[] = "Julian";

char primo1[] = "Santiago";
char primo2[] = "Alejandro";


void* mover_dinero(char* tio[]){
  for(int i = 0; i<100; i++){
          pthread_mutex_lock(&locked);
        int movimiento = rand()%1000;
    

    
        if(disponible >10000)
        {
           printf("papi ya no aguanto mas platica")
        }
        else
        {
             disponible += movimiento;
            printf("tio ha ingresado dinero a la cuenta %i\n"movimiento);
        }
    
   
   
        pthread_mutex_unlock(&locked);

    }//se cierra el for
} 
void* sacar_dinero(char* primo[]){
    for(int i = 0; i<100; i++){
          pthread_mutex_lock(&locked);
        int movimiento = rand()%1000;
    

    if(disponible>5000){

         disponible -= movimiento;
        printf("Primo ha retirado dinero de la cuenta %i\n"movimiento);
    }
    else{
        printf("ya no hay mas platica");
    }


    pthread_mutex_unlock(&locked);
    }
}

int main(int argc, char argv[])
{

    printf("Simulacion de una cuenta familiar durante X cantidad de transacciones");

    if(pthread_mutex_init(&locked, NULL) != 0)
    {
        printf("No salió mi papá, acuéstese a llorar");
        exit(1);
    }

    pthread_t id[1], id[2], id[3], id[4];
    pthread_create(&id[1], NULL, mover_dinero, tio1);
    pthread_create(&id[2], NULL, mover_dinero, tio2);
    pthread_create(&id[3], NULL, sacar_dinero, primo1);
    pthread_create(&id[4], NULL, sacar_dinero, primo2);

    pthread_join(id[1], NULL);
    pthread_join(id[2], NULL);
    pthread_join(id[3], NULL);
    pthread_join(id[4], NULL);

    printf("Simulación finalizada")

    exit(0);

}