#include  <stdio.h>
#include <string.h>

int main(){
    char nombre[20] = "Adrian";
    char apellido[20] = "Shepard";

    strcat (nombre, apellido);

    printf(nombre);

    return 0;

}