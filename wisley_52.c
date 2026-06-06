#include <stdio.h>

int main() {
    int num, soma = 0;

    do {
        printf("Digite um numero: ");
        scanf("%d", &num);

        soma += num;

    } while(num % 10 != 0);

    printf("Soma total = %d\n", soma);

    return 0;
}
