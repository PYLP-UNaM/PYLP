#include "mpi.h"
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    int comRango, comTamano;
    MPI_Init(&argc, &argv); //Inicializamos la estructura de comunicación paralela entre procesos

    MPI_Comm_rank(MPI_COMM_WORLD, &comRango); //Obtenemos (en comRango) el rango del comunicador global que es MPI_COMM_WORLD
    MPI_Comm_size(MPI_COMM_WORLD, &comTamano); //Obtenemos (en comTamano) el tamaño del comunicador MPI_COMM_WORLD

    if (comRango % 2 == 0){
        printf("Soy el proceso %d, un proceso par\n",comRango);
    }else{
        printf("Soy el proceso %d, un proceso impar\n",comRango);
    }

    MPI_Finalize(); //Finalizamos la estructura de comunicación paralela entre procesos
}