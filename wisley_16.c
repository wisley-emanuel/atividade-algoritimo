#include <stdio.h>

int main() {
    int n;

    printf("Numero do pedido: ");
    scanf("%d", &n);

    if (n % 3 == 0 && n % 5 == 0)
        printf("Ganhou refrigerante e sobremesa\n");
    else if (n % 3 == 0)
        printf("Ganhou refrigerante\n");
    else if (n % 5 == 0)
        printf("Ganhou sobremesa\n");
    else
        printf("Sem premio\n");

    return 0;
}
