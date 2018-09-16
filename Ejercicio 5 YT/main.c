#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funciones.h"

#define CANTIDAD 5

int main()
{
    int arrayDeNumeros[CANTIDAD];
    int numeroIngresado;
    int indiceArray;
    int valorIngresado;
    int opcionMenu = 0;

    for(indiceArray = 0; indiceArray<CANTIDAD; indiceArray++)
    {
        numeroIngresado = getInt("Ingrese el valor: \n");
        arrayDeNumeros[indiceArray] = numeroIngresado;
    }

    while(opcionMenu!=3)
    {
        opcionMenu = getInt("\n1-Mostrar \n2-Modificar \n3-Salir");
        switch(opcionMenu)
        {
            case 1:
                printf("\n\nINDICE - VALOR\n");
                for(indiceArray=0;indiceArray<CANTIDAD;indiceArray++)
                {
                    printf(" %d   -   %d\n",indiceArray,arrayDeNumeros[indiceArray]);
                }
                break;

            case 2:
                indiceArray = getInt("\nIngrese el indice a modificar:");
                if(indiceArray>=0 && indiceArray<CANTIDAD)
                {
                    valorIngresado = getInt("Ingrese el valor: \n");
                    arrayDeNumeros[indiceArray]= valorIngresado;
                }
                else
                {
                    printf("El valor ingresado esta fuera de rango");
                }
                break;


        }
    }



    return 0;
}
