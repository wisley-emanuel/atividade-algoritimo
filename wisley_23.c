#include <stdio.h>

int main() {
    int a, b;

    scanf("%d %d", &a, &b);

    if (a > b)
        printf("Maior: %d\n", a);
    else
        printf("Maior: %d\n", b);

    return 0;
}
