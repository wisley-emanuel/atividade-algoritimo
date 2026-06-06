#include <stdio.h>

int main() {
    char sair;

    do {
        printf("Executando operacao...\n");

        printf("Deseja sair? (s/n): ");
        scanf(" %c", &sair);

    } while(sair != 's' && sair != 'S');

    printf("Programa encerrado.\n");

    return 0;
}
