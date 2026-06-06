#include <stdio.h>

int main() {
    int num, i = 2, primo = 1;

    printf("Digite um numero: ");
    scanf("%d", &num);

    if(num <= 1)
        primo = 0;

    while(i < num) {
        if(num % i == 0) {
            primo = 0;
            break;
        }
        i++;
    }

    if(primo)
        printf("Numero primo\n");
    else
        printf("Nao e primo\n");

    return 0;
}
