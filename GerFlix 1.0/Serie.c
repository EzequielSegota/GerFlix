
#include "Serie.h"
#include <string.h>

/*
    int idSerie;
    char nombre[50];
    char genero[20];
    int cantidadTemporadas;
    int estado;

*/

void inicializarSeriesEstado(eSerie series[], int cant)
{
    int i;

    for(i=0; i<cant; i++)
    {
        series[i].estado = 0;
    }
}


void inicializarSeriesHardCode(eSerie series[])
{
    int id[5] = {100,101,102,103,104};
    char nombre[][50]={"TBBT","TWD","GOT","BB","LCDP"};
    char genero[][50]={"Comedia","Terror","Suspenso","Policial","Policial"};
    int cantidad[5] = {10,9,7,5,2};

    int i;

    for(i=0; i<5; i++)
    {
        series[i].idSerie=id[i];
        series[i].cantidadTemporadas=cantidad[i];
        series[i].estado = 1;
        strcpy(series[i].nombre, nombre[i]);
        strcpy(series[i].genero, genero[i]);
    }
}


void mostrarListaSeries(eSerie listaSeries[],int lenghtSerie)
{
    int i;

    for(i=0;i<lenghtSerie;i++)
    {
        if(listaSeries[i].estado==1)
        printf("\n\nEl ID de la serie es: %d\nEl nombre de la serie es: %s\nEl genero de la serie: %s\nLa cantidad de temporadas es: %d\n",listaSeries[i].idSerie, listaSeries[i].nombre, listaSeries[i].genero, listaSeries[i].cantidadTemporadas);
    }
}

