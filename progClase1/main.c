#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero;
    char letra;
    printf("ingrese un numero: ");
    scanf("%d", &numero);
    printf("ingrese una letra: ");
    fflush(stdin);
    scanf("%c", &letra);
    printf("El numero es: %d\n y la letra es: %c\n", numero, letra);
    system("pause");
    return 0;
}
