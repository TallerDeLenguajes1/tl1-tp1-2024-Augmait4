#include <stdio.h>
#include <windows.h>
#include <math.h>

int cuadrado();
void cuadradoVoid(int num1);
void invertir(int A, int B);
void orden(int A, int B);
int main(int argc, char const *argv[])
{
    int resultado1;
    int num1, A, B;
    resultado1 = cuadrado();
    printf("El numero al cuadrado es: %d", resultado1);
    printf("\n----------------FUNCION VOID ELEVAR AL CUADRADO UN NUMERO----------------------\n");
    printf("Ingresar un numero Entero: ");
    scanf("%d", &num1);
    cuadradoVoid(num1);
    printf("\n----------------INGRESO DE DATOS----------------------");
    printf("\nIngresar Valor de el Par que Desea Invertir y Ordenar (A,B):");
    scanf("%d %d", &A, &B);
    printf("\n----------------FUNCION INVERTIR NUMEROS----------------------");
    invertir(A,B);
    printf("\n----------------FUNCION ORDENAR NUMEROS----------------------");
    orden(A,B);
    return 0;
}
int cuadrado(){
    int num1, res;
    printf("----------------FUNCION ELEVAR AL CUADRADO UN NUMERO----------------------\n");
    printf("Ingresar un numero Entero: ");
    scanf("%d", &num1);
    res = num1 * num1;
    return res;
}
void cuadradoVoid(int num1){
    int result;
    result = num1 * num1;
    printf("El numero al cuadrado es: %d", result);
    printf("\nDireccion de La Variable es: %p", &result);
}
void invertir(int A, int B){
    int aux;
    printf("\n A= %d , B= %d", A, B);
    aux = A;
    A = B;
    B = aux;
    printf("\n Los Nuevos Numeros son A= %d y B= %d", A, B);
}
void orden(int A, int B){
    int aux;
    printf("\n A= %d , B= %d", A, B);
    if (A > B)
    {
        aux = A;
        printf("\nEl numero Mayor es: %d", A);
        printf("\nEl numero Menor es: %d", B);
    }else if (B > A)
    {
        aux = B;
        printf("\nEl numero Mayor es: %d", B);
        printf("\nEl numero Menor es: %d", A);
    }
}