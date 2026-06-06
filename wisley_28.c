#include <stdio.h>

int main() {
    int soma = 0, i;

    for(i = 1; i <= 100; i++) {
        soma += i;
    }

    printf("Soma = %d\n", soma);

    return 0;
}
