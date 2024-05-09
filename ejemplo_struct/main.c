#include <stdio.h>


typedef struct {
    char* nombre;
    char* apellido;
    unsigned edad ;
    unsigned nota;
} alumno_t;




void imprimir_alumno(alumno_t alumno){
    printf("Alumno:\n\tNombre: %s\n\tApellido: %s\n\tEdad: %d\n\tNota: %d\n",
    alumno.nombre,alumno.apellido,alumno.edad,alumno.nota);
    printf("El peso en bytes de alumno_t es:%u\n",sizeof(alumno_t));
    printf("El peso en bytes de un puntero a  alumno_t es:%u\n",sizeof(alumno_t*));

}

int main(void){

    alumno_t german = {
        .apellido = "Velardez",
        .nombre = "German",
        .edad = 31,
        .nota = 10
    };
    

    imprimir_alumno(german);

    return 0;
}