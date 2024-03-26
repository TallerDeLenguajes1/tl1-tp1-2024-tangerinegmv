#include <stdio.h>

int cuadrado (int num);
void cuadrado ( int *num);
int main(){
int num= 5;
int resultado = cuadrado(num);
printf("%d", resultado);
    return 0;
}
int cuadrado (int num){
    int relustado;
    relustado = num*num;
    return relustado;
}
void cuadrado ( int *num){
    
}