#include <stdio.h>

int main() {
    int a, b, c;

    printf("Digite os tres lados: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a == b && b == c)
        printf("Equilatero\n");
    else if (a == b || a == c || b == c)
        printf("Isosceles\n");
    else
        printf("Escaleno\n");

    return 0;
}
