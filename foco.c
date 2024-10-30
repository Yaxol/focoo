#include <stdio.h>


int main() {
    int focoEncendido = 0; // 0 es apagado, 1 es encendido
    int ciclos = 2; // Número de veces que el foco se encenderá y apagará

    while (ciclos > 0) {
        if (focoEncendido) {
            printf("El foco esta APAGADO\n");
            focoEncendido = 0;
        } else {
            printf("El foco esta ENCENDIDO\n");
            focoEncendido = 1;
        }
        
        
        // Disminuye el contador de ciclos
        ciclos--;
    }

    printf("El ciclo de encendido y apagado ha terminado.\n");

    return 0;
}
