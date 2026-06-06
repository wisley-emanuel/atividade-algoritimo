#include <stdio.h>

int main() {
    float altCam, largCam, compCam;
    float altCx, largCx, compCx;

    printf("Altura, largura e comprimento do caminhao: ");
    scanf("%f %f %f", &altCam, &largCam, &compCam);

    printf("Altura, largura e comprimento da caixa: ");
    scanf("%f %f %f", &altCx, &largCx, &compCx);

    int qtd = (altCam / altCx) * (largCam / largCx) * (compCam / compCx);

    printf("Quantidade de caixas: %d\n", qtd);

    return 0;
}
