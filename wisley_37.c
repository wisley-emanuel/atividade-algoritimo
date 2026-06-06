#include <stdio.h>

int main() {
    int num, soma = 0;

    printf("Digite numeros (0 para encerrar):\n");
    scanf("%d", &num);

    while(num != 0) {
        soma += num;
        scanf("%d", &num);
    }

    printf("Soma total = %d\n", soma);

    return 0;
}
