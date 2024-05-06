// Directivas
#include <stdio.h>
#include <stdbool.h>
#include <string.h>
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

                           // si N diferente de 0 es true. Si N es 0 vale false.
#define SIZE_IN_BYTES   "tiene un tamaño en bytes igual a "
int main(void){
    printf("Quiero saber cuantos bytes ocupan los tipos de datos\n");
    printf("int  %s  %d \n", SIZE_IN_BYTES,sizeof(int));    // %d para numeros enteros con signo
    printf("unsigned int %s  %d\n", SIZE_IN_BYTES,sizeof(unsigned int));    // %u para numero sin signo (unsigned)
    printf("long %s %d\n",SIZE_IN_BYTES,sizeof(double));
    printf("float %s %d\n", SIZE_IN_BYTES,sizeof(float)); // %.2f para numeros con decimales. El 2 es por el numero de decimales utilizado.
    printf("double %s %d \n",SIZE_IN_BYTES,sizeof(double));
    printf("char %s %d\n", SIZE_IN_BYTES,sizeof(char));
    printf("nombre= %s %s %d \n",nombre, SIZE_IN_BYTES,strlen(nombre));
    return 0;
}