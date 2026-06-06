#include <stdio.h>

int main() {
    int num;
    int maior = -1;

    do {
        printf("Digite um numero: ");
        scanf("%d", &num);

        if(num >= 0 && num > maior)
            maior = num;

    } while(num >= 0);

    if(maior >= 0)
        printf("Maior numero digitado: %d\n", maior);
    else
        printf("Nenhum numero positivo foi informado.\n");

    return 0;
}
