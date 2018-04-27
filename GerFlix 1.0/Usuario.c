
#include "Usuario.h"

void inicializarUsuariosEstado(eUsuario usuarios[], int cant)
{
    int i;

    for(i=0; i<cant; i++)
    {
        usuarios[i].estado = 0;
    }
}
void inicializarUsuariosHardCode(eUsuario usuarios[])
{


    int id[15] = {1000,1001,1002,1003,1004, 1005,1006,1007,1008,1009, 1010,1011,1012,1013,1014};
    char nombre[][50]= {"Juan","Maria","Pedro","Vanesa","Jose","Luisa","Laura","Marcelo","German","Victoria","Dafne","Antonela","Gisele","Dario","Pedro"};

    int serie[15] = {100,100,101,101,102,100,100,103,101,102,103,101,100,100,101};



    int i;

    for(i=0; i<15; i++)
    {
        usuarios[i].idUsuario=id[i];
        usuarios[i].idSerie=serie[i];
        usuarios[i].estado = 1;
        strcpy(usuarios[i].nombre, nombre[i]);

    }

}

void mostrarListaUsuarios(eUsuario listaUsuario[], int lenghtUsuario)
{
    int i;
    for(i=0;i<lenghtUsuario;i++)
    {
        if(listaUsuario[i].estado==1)
        printf("\n\nEl ID del usuario es: %d\nEl nombre del usuario es: %s\nLa ID de la serie es: %d\n",listaUsuario[i].idUsuario,listaUsuario[i].nombre,listaUsuario[i].idSerie);
    }
}

void mostrarUsuarioConSuSerie(eUsuario usuarioSerie[],int lenghtUsuario,eSerie serieUsuario[], int lenghtSerie)
{
    int i,j;

    for(i=0;i<lenghtUsuario;i++)
    {
        if(usuarioSerie[i].estado==1)
        {
            for(j=0;j<lenghtSerie;j++)
            {
                if(usuarioSerie[i].idSerie==serieUsuario[j].idSerie)
                {
                    printf("\n\nEl nombre del usuario es: %s\nY la serie que ve es: %s\n",usuarioSerie[i].nombre,serieUsuario[j].nombre);
                }
            }
        }
    }
}

void mostrarSerieConUsuario(eSerie serieUsuario[], int lenghtSerie, eUsuario usuarioSerie[], int lenghtUsuario)
{
    int i,j;

    for(i=0;i<lenghtSerie;i++)
    {
        if(serieUsuario[i].estado==1)
        {
            printf("\n\n\nLa serie es: %s",serieUsuario[i].nombre);

            for(j=0;j<lenghtUsuario;j++)
            {
                if(serieUsuario[i].idSerie==usuarioSerie[j].idSerie)
                {
                    printf("\nLos usuarios que la ven son: %s\n",usuarioSerie[j].nombre);
                }
            }
        }
    }

}

