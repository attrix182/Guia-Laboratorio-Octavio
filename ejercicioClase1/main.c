#include <stdio.h>
#include <stdlib.h>
void saludar(void);
int dameNumero(void);

int main()
{
    int edad;
    int numero;
    int contador;
    int suma;
    int promedio;
    int limite
    float altura;
    altura = 82.5;
    edad = 66;


    printf("\n ingrese su edad :");
    scanf("%d",&edad);
    printf("\n ingrese su altura :");
    scanf("%f",&altura);
    printf("martin \t soñez \n");
    printf(" su edad es: %d",edad);
    printf(" su altura es: %f",altura);

    contador = 0;
    suma = 0;
    limite = dameNumero();
    while(contador<limite)
    {
        printf("\n ingrese un numero:");
        scanf("%d",&numero);

         suma = suma+numero;
         contador++;
    }
    promedio = suma/contador;
    printf("El promedio es: %f",altura);












    return 0;

}

void saludar(void)
{
    printf("hola mundo C");
}

int dameNumero(void);
{
    int cantidad;
     printf("\n ingrese su edad :");
    scanf("%d",&edad);

}
