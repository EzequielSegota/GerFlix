#include <stdio.h>
#include <stdlib.h>
#include "Usuario.h"
#define TAMSERIE 20
#define TAMUSUARIO 100

int main()
{
    eSerie listaDeSeries[TAMSERIE];
    eUsuario listaDeUsuarios[TAMUSUARIO];

    inicializarSeriesEstado(listaDeSeries, TAMSERIE);
    inicializarSeriesHardCode(listaDeSeries);

    inicializarUsuariosEstado(listaDeUsuarios,TAMUSUARIO);
    inicializarUsuariosHardCode(listaDeUsuarios);

/*  1. Mostrar el listado de series
    2. Mostrar el listado de usuarios
    3. Mostrar el listado de Usuarios con el nombre de la serie que ve
    4. Mostrar por cada serie, el nombre de los usuarios que la ven.
*/
    int opcion,i;

    do
    {
        printf("\n\nIngrese 1 para listado de series.\n");
        printf("\n\nIngrese 2 para listado de usuarios.\n");
        printf("\n\nIngrese 3 para listado de usuarios con el nombre de serie que ve.\n");
        printf("\n\nIngrese 4 para mostrar cada serie con nombre de usuario que la ve.\n");
        printf("\n\nIngrese 5 para salir.\n");

        scanf("%d",&opcion);
        system("/usr/bin/clear");

         switch(opcion)
         {
             case 1:
                mostrarListaSeries(listaDeSeries, TAMSERIE);
                break;
            case 2:
                mostrarListaUsuarios(listaDeUsuarios, TAMUSUARIO);
                break;
            case 3:
                mostrarUsuarioConSuSerie(listaDeUsuarios, TAMUSUARIO, listaDeSeries, TAMSERIE);
                break;
            case 4:
                mostrarSerieConUsuario(listaDeSeries, TAMSERIE, listaDeUsuarios, TAMUSUARIO);
                break;
            default:
                opcion=5;

         }


    }while(opcion!=5);


    return 0;
}
