#include <stdio.h>
#include <windows.h>
#include <time.h>
int main(int argc, char const *argv[])
{
    int var1 = 3;
    int *pVar1 = &var1;
    printf("Hola Mundo");
    printf("\nContenido del Puntero: %d", *pVar1);
    printf("\nDireccion de Memoria Almacenada por el Puntero : %p", pVar1);
    printf("\nDireccion de Memoria de la Variable: %p", &var1);
    printf("\nDireccion de Memoria del Puntero: %p", &pVar1);
    printf("\nTamaño de Memoria Utilizado por la variable: %zu bytes", sizeof(var1));
    free(pVar1);
    return 0;
}