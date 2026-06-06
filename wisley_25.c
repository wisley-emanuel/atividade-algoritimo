#include <stdio.h>

int main() {
    float media;

    printf("Digite a media: ");
    scanf("%f", &media);

    if (media >= 7)
        printf("Aprovado\n");
    else if (media >= 5)
        printf("Recuperacao\n");
    else
        printf("Reprovado\n");

    return 0;
}
