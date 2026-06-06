#include <stdio.h>

int main() {
    int num, contador = 0, i = 1;

    while(i <= 10) {
        printf("Digite o %d numero: ", i);
        scanf("%d", &num);

        if(num % 2 != 0)
            contador++;

        i++;
    }

    printf("Quantidade de impares: %d\n", contador);

    return 0;
}
