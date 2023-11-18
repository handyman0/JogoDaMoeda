#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Iniciando com o gerador de numeros aleatorios
    srand(time(NULL));

    // Geração aleatoria de 0 ou 1
    int resultado = rand() % 2;

    // Exibindo o resultado
    if (resultado == 0) {
        printf("Cara\n");
    }else {
        printf("Coroa\n");
    }

    return 0;


} 