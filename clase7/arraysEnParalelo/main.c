#include <stdio.h>
#include <stdlib.h>
#include "string.h"
#define CANTIDAD_ALUMNOS 4
//arrays en paralelo

void getString(char mensaje[], char input[]);


int main()
{

    char nombres[CANTIDAD_ALUMNOS][50] = {"Alfredo", "Rogelio", "Julieta", "Pablo"};
    char apellidos[CANTIDAD_ALUMNOS][50] = {"Mercurio", "Gates", "Jobs", "Perez"};
    int edades[CANTIDAD_ALUMNOS] = {5, 24, 37, 18};
    int notas[CANTIDAD_ALUMNOS] = {2, 4, 7, 10};
    int i;

    for(i=0; i < CANTIDAD_ALUMNOS; i++)
    {
        if(nombres[i] != -1)
        {
            printf("\n Nombre y Apellido: %s %s   edad: %d   nota: %d  ", nombres[i], apellidos[i], edades[i], notas[i]);
        }
    }
    char unNombre[50];

    getString("\n ingrese nombre:: ", unNombre);

    printf("El nombre es &s", unNombre);

    strcpy(nombres[0], unNombre);

     for(i=0; i < CANTIDAD_ALUMNOS; i++)
    {
        if(nombres[i] != -1)
        {
            printf("\n Nombre y Apellido: %s %s   edad: %d   nota: %d  ", nombres[i], apellidos[i], edades[i], notas[i]);
        }
    }


    return 0;
}

void getString(char mensaje[],char input[])
{
    printf(mensaje);
    scanf("%s", input);
}
