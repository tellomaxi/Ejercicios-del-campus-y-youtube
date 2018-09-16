#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
#include <time.h>

/** \brief Solicita dos numeros y los suma
 *
 * \param a Numero a ingresar por el usuario
 * \param b Segundo numero a ingresar por el usuario
 * \return En caso de no dar error, retorna la suma de las dos variables.
 *
 */

float funcion_Suma(float a,float b)
{
    float suma;
    suma = a+b;
    return suma;
}


/** \brief Solicita dos numeros y los resta
 *
 * \param a Numero a ingresar por el usuario
 * \param b Segundo numero a ingresar por el usuario
 * \return En caso de no dar error, retorna la resta de las dos variables.
 *
 */

float funcion_Resta(float a,float b)
{
    float resta;
    resta = a-b;
    return resta;
}


/** \brief Solicita dos numeros y los multiplica
 *
 * \param a Numero a ingresar por el usuario
 * \param b Segundo numero a ingresar por el usuario
 * \return En caso de no dar error, retorna la multiplicacion de las dos variables.
 *
 */

float funcion_Multiplicacion(float a,float b)
{
    float multiplicacion;
    multiplicacion = a*b;
    return multiplicacion;
}

/** \brief Solicita dos numeros y los divide
 *
 * \param a Numero a ingresar por el usuario
 * \param b Segundo numero a ingresar por el usuario
 * \return En caso de no dar error, retorna la division de las dos variables.
 *
 */

float funcion_Division(float a,float b)
{

    if(b==0)
    {
        printf("Error.");
        return -1;
    }
    else
    {
        float division;
        division = a/b;
        return division;
    }
}
/** \brief Solicita un numero y saca el factorial
 *
 * \param a
 * \param
 * \return
 *
 */

int funcion_Factorial(int a)
{
    int resp;
    if(a==1)
        return 1;
    resp=a* funcion_Factorial(a-1);
    return (resp);

}

/** \brief Solicita un numero al usuario y devuelve el resultado
 * \param mensaje Es el mensaje a ser mostrado
 * \return El numero ingresado por el usuario
 *
 */
float getFloat(char mensaje[])
{
    float auxiliar;
    printf("%s",mensaje);
    scanf("%f",&auxiliar);
    return auxiliar;
}

/** \brief Solicita un numero al usuario y devuelve el resultado
 * \param mensaje Es el mensaje a ser mostrado
 * \return El numero ingresado por el usuario
 *
 */
int getInt(char mensaje[])
{
    int auxiliar;
    printf("%s",mensaje);
    scanf("%d",&auxiliar);
    return auxiliar;
}

/** \brief Solicita un caracter al usuario y devuelve el resultado
 * \param mensaje Es el mensaje a ser mostrado
 * \return El caracter ingresado por el usuario
 *
 */
char getChar(char mensaje[])
{
    char auxiliar;
    printf("%s",mensaje);
    fflush(stdin);
    scanf("%c",&auxiliar);
    return auxiliar;
}

/** \brief Genera un numero aleatorio
 * \param desde Numero aleatorio minimo
 * \param hasta Numero aleatorio maximo
 * \param iniciar Indica si se trata del primer numero solicitado
 * \return retorna el numero aleatorio generado
 *
 */
char getNumeroAleatorio(int desde, int hasta, int iniciar)
{
    if(iniciar)
        srand(time(NULL));
        return desde + (rand() % (hasta + 1 - desde));
}
