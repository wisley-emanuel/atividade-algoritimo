#include <stdio.h>

int main() {
    int num, digitos = 0;

    printf("Digite um numero positivo: ");
    scanf("%d", &num);

    if(num == 0)
        digitos = 1;
    else {
        while(num > 0) {
            digitos++;
            num /= 10;
        }
    }

    printf("Quantidade de digitos: %d\n", digitos);

    return 0;
}
