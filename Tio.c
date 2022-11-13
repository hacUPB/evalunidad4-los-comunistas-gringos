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



