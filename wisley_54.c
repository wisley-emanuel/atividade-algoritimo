#include <stdio.h>

int main() {
    int nivel;

    do {
        printf("Digite um numero entre 1 e 5: ");
        scanf("%d", &nivel);

    } while(nivel < 1 || nivel > 5);

    printf("Nivel valido!\n");

    return 0;
}
