// Directivas
#include <stdio.h>
#include <stdbool.h>
// Tipos de datos

// Enteros: int y long 

int numero_int = -110;           // Numero entero con signo
unsigned int numero_int2 = 2231;  // Numero entero sin signo          
long numero_long = 45000008990;     // Mayor rango para definir números enteros. Ocupa mas espacio.   



float numero_float = 55.2;         // Define números naturales con decimales.
double numero_double = 54.23450;  // Tiene mas precision para definir los números decimales.

char inicial = 'G';             // Un caracter, Se define entre ' ' (comillas simples).
char nombre[]="German";         // Una secuencia de caracteres, se definen entre " "(comillas dobles).
// Tipos de datos bolean

bool condicion = true;

int main(void){

    printf("numero_int = %d \n",numero_int);    // %d para numeros enteros con signo
    printf("numero_int2= %u\n",numero_int2);    // %u para numero sin signo (unsigned)
    printf("numero_float=%.2f\n",numero_float); // %.2f para numeros con decimales. El 2 es por el numero de decimales utilizado.
    printf("inicial=%c\n",inicial);
    printf("nombre = %s\n",nombre);
    return 0;
}