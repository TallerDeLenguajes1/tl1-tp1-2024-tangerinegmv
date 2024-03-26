#include <stdio.h>

int main(){
    printf("Hola mundo");
    int a = 26;
    int *punteroA;
    punteroA = &a;
    printf("Contenido del puntero: %d \n", *punteroA);
    printf("La dirección de memoria almacenada por el puntero: %d \n", punteroA);
    printf("la dirección de memoria de la variable.: %d \n", &a);
    printf("La dirección de memoria almacenada por el puntero: %d \n", &punteroA);
    printf("el tamaño de memoria utilizado por esa variable usando la función sizeof(): %d \n", sizeof(a));
    //printf("prueba commit");

    return 0;
}