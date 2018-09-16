#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "funciones.h"

int main()
{
    int numeroOculto;
    int numeroIngresado;
    char teclaIngresada;
    int jugar;

    teclaIngresada = 's';

    while(teclaIngresada='s')
    {
        numeroOculto = getNumeroAleatorio(1,100,1);
        jugar = 1;

        while(jugar==1)
        {
            numeroIngresado=getInt("Ingrese un numero(0-99)\n");
            if(numeroIngresado<0)
            {
                jugar = 0;
            }
            else if(numeroIngresado==numeroOculto)
            {
                printf("FELICITACIONES GANASTE!!!");
                jugar=0;
            }
            else if(numeroIngresado>numeroOculto)
            {
                printf("El numero que ingresaste es grande!!!\n");
            }
            else if(numeroIngresado<numeroOculto)
            {
                printf("El numero que ingresaste es chico!!!\n");
            }

        }
        teclaIngresada=getChar("Desea jugar nuevamente?(s/n)\n");
    }



    return 0;
}
/*
float getFloat(char mensaje[])
{
    float auxiliar;
    printf("%s",mensaje);
    scanf("%f",&auxiliar);
    return auxiliar;
}

int getInt(char mensaje[])
{
    int auxiliar;
    printf("%s",mensaje);
    scanf("%d",&auxiliar);
    return auxiliar;
}


char getChar(char mensaje[])
{
    char auxiliar;
    printf("%s",mensaje);
    fflush(stdin);
    scanf("%c",&auxiliar);
    return auxiliar;
}

char getNumeroAleatorio(int desde, int hasta, int iniciar)
{
    if(iniciar)
        srand(time(NULL));
        return desde + (rand() % (hasta + 1 - desde));
}

*/
