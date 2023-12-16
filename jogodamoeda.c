#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

const char* lancar_moeda() {
    int resultado = rand() % 2;

    if(resultado == 0) {
        return "cara";
    } else {
        return "coroa";
    }
}

void jogar_denovo() {
    char resposta[4];

    printf("jogar novamente? (sim/nao)\n");
    scanf("%s", resposta);

    if (strcmp(resposta, "sim") == 0) {
        const char* resultado = lancar_moeda();
        printf("O resultado foi %s\n", resultado);
        jogar_denovo();
    } else if (strcmp(resposta, "nao") == 0) {
        printf("obrigado por jogar!\n");
        exit(0);
    } else {
        printf("resposta invalida! por favor digite sim ou nao\n");
        jogar_denovo();
    }
}


int main() {
    char iniciar[4];

    printf("Jogo da Moeda!\n\n");

    printf("Jogar a moeda? (sim/nao)\n");
    scanf("%s", iniciar);
    
    if (strcmp(iniciar, "sim") == 0) {
        const char* resultado = lancar_moeda();
        printf("O resultado foi %s\n", resultado);
        jogar_denovo();
    } else if (strcmp(iniciar, "nao") == 0) {
        printf("saindo...!\n");
        exit(0);
    } else {
        printf("resposta invalida! por favor digite sim ou nao\n");
        exit(1);
    }
    return 0;
} 