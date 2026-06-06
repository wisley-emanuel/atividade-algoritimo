#include <stdio.h>

int main() {
    int num;

    printf("Digite um numero positivo: ");
    scanf("%d", &num);

    while(num <= 0) {
        printf("Valor invalido. Digite novamente: ");
        scanf("%d", &num);
    }

    printf("Numero valido: %d\n", num);

    return 0;
}
