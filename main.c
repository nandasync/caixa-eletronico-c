#include <stdio.h> 
int main () {
    double saldo = 0;
    int opcao;

    do {
        printf("\n===== CAIXA ELETRONICO =====\n");
        printf("1- ver saldo\n");
        printf("2- depositar\n");
        printf("3- sacar\n");
        printf("4- sair\n");
        printf("%d", &opcao);

        switch (opcao) {
            case 1: 
            printf("saldo atual: R$ %.2f\n", saldo);
        break;
            case 2:
                printf("Voce escolheu depositar.\n");
                break;
            case 3:
                printf("Voce escolheu sacar.\n");
                break;
            case 4:
                printf("Ate logo!\n");
                break;
            default:
                printf("Opcao invalida.\n");
        }
    } while (opcao != 4);

    return 0;
}