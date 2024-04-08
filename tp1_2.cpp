#include <stdio.h>

int cuadrado (int num);
void cuadradoVoid ( int num);
void contDirecVariable (int num);
void invertir (int *a, int *b);
void orden (int *a, int *b);
int main(){
int num= 5;
int resultado = cuadrado(num);
printf("Cuadrado de %d: %d\n", num, resultado);
cuadradoVoid(num);
contDirecVariable(num);
int a, b, *pa, *pb;
a = 100;
b =20;
pa = &a;
pb = &b;
invertir(pa, pb);
orden(&a, &b);
    return 0;
}
int cuadrado (int num){
    int resultado;
    resultado = num*num;
    return resultado;
}
void cuadradoVoid ( int num){
    int resultado;
    resultado = num*num;
    printf("Cuadrado de %d(funcion void): %d", num, resultado);
}
void contDirecVariable(int num){
  printf("\nContenido de la variable: %d \nDireccion de la variable: %d", num, &num);
  
}
void invertir(int *a, int *b){
  printf("\n Numeros originales: \n a: %d \nb: %d", *a, *b);
  int *aux = a;
  a = b;
  b = aux;
  printf("\n Numeros invertidos: \n a: %d \nb: %d", *a, *b);
  
}
void orden(int *a, int *b){
  int *aux =a;
  if(a>b){
    a = b;
    a = aux;
  }
  printf("\nNumeros ordenados de menor a mayor: %d, %d", *a, *b);
}
