/*
    Definición de funciones
*/
#include <stdio.h>
//#define PRINT_DETAILS              


// ¿Como se define una función?
// tipo de dato de retorno     nombre de la función      ( parámetros ) 

// Las funciones esperan ciertos tipos de parámetros o
// al menos parámetros cuyo tipos se puedan adecuar
// ejemplo: float --> int (perdiendo precision)
// char --> int (perdiendo precision)
// int --> bool (Si int es diferente de 0 es false, sino es true)

// Ejemplos

int suma(int n1, int n2){
    #ifdef PRINT_DETAILS   // Estos es una directiva de compilación condicional
    printf("[Detalles]suma %d %d  = %d \n",n1,n2,(n1+n2));
    #endif
    return (n1 + n2);
}



void print_saludo(char* nombre){
    #ifdef PRINT_DETAILS
    printf("[Detalles]print_saludo\n");
    #endif
    printf("Hola, %s\n",nombre);
}


 retorna_algo(){
    #ifdef PRINT_DETAILS
    printf("[Detalles] retorna algo\n");
    #endif
    printf("retorna algo\n");
 }



int main(void){
    printf("Inicio programa\n");
    int numeroA = 12;
    int numeroB = 123;
    int numeroC = suma(numeroA,numeroB);
    printf("numeroC %d\n",numeroC);
    numeroC = retorna_algo();
    printf("numeroC %d\n",numeroC);
}