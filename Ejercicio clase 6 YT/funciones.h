#include <stdio.h>
#include <stdlib.h>

float funcion_Suma(float a,float b);
float funcion_Resta(float a,float b);
float funcion_Multiplicacion(float a,float b);
float funcion_Division(float a,float b);
int funcion_Factorial(int a);

int getInt(char mensaje[]);
float getFloat(char mensaje[]);
char getChar(char mensaje[]);

char getNumeroAleatorio(int desde, int hasta, int iniciar);

int esNumerico(char str[]);
int esTelefono(char str[]);
int esAlfaNumerico(char str[]);
int esSoloLetras(char str[]);
