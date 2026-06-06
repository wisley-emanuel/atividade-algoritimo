#include <stdio.h>

int main() {
    int opcao = 0;

    while(opcao != 3) {
        printf("\nMENU\n");
        printf("1 - Deposito\n");
        printf("2 - Saque\n");
        printf("3 - Sair\n");
        printf("Opcao: ");
        scanf("%d", &opcao);

        if(opcao == 1)
            printf("Deposito selecionado\n");
        else if(opcao == 2)
            printf("Saque selecionado\n");
        else if(opcao == 3)
            printf("Encerrando...\n");
        else
            printf("Opcao invalida\n");
    }

    return 0;
}
