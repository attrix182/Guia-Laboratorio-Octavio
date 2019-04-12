#include <stdio.h>
#include <stdlib.h>
#include "string.h"
#define CANTIDAD_ALUMNOS 4

void mostarAlumnos(char[][50], char[][50], int[], int[], int[]);
void ordenarAlumnos(char [][50], char[][50], int[], int[], int[]);


int main()
{

    char nombres[CANTIDAD_ALUMNOS][50] = {"Alfredo", "Rogelio", "Julieta", "Pablo"};
    char apellidos[CANTIDAD_ALUMNOS][50] = {"Mercurio", "Gates", "Jobs", "Perez"};
    int edades[CANTIDAD_ALUMNOS] = {5, 24, 37, 18};
    int notas[CANTIDAD_ALUMNOS] = {2, 4, 7, 10};

    mostarAlumnos(nombres, apellidos, edades, notas, CANTIDAD_ALUMNOS);

    return 0;
}

void ordenarAlumnos(char nombres[][50], char apellidos[][50], int edades[], int notas[], int tam)
{
    int i;
    int j;
    char auxCadena[50]
    for(i = 0; i< CANTIDAD_ALUMNOS-1; i++)
    {
        for(j=i+1; j<CANTIDAD_ALUMNOS; j++)
        {
            if(strcmp(nombre[i], nombre[j)>0)
                strcpy(auxCadena , nombres[i]);
                strcpy(nombres[i] , nombres[j]);
                strcpy(nombres[j] , auxCadena);
        }

}


void mostarAlumnos(char nombres[][50], char apellidos[][50], int edades[], int notas[], int tam)
{
    int i;
    for(i=0; i < CANTIDAD_ALUMNOS; i++)
    {
        if(nombres[i] != -1)
        {
            printf("\n Nombre y Apellido: %s %s   edad: %d   nota: %d  ", nombres[i], apellidos[i], edades[i], notas[i]);
        }
    }
}
