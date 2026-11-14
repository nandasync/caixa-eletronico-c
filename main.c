#include <stdio.h>

void mostrar_menu() {
    printf("\n====== CAIXA ELETRONICO ======\n");
    printf("1) ver saldo\n");
    printf("2) depositar\n");
    printf("3) sacar\n");
    printf("4) sair\n");
    printf("escolha uma opcao: ");
}

double depositar(double saldo) {
    double valor;
    printf("valor do deposito: R$ ");
    scanf("%lf", &valor);

    if (valor <= 0) {
        printf("valor invalido. digite um valor maior que zero.\n");
    } else {
        saldo += valor;
        printf("deposito realizado! novo saldo: R$ %.2f\n", saldo);
    }
    return saldo;
}

double sacar(double saldo) {
    double valor;
    printf("valor do saque: R$ ");
    scanf("%lf", &valor);

    if (valor <= 0) {
        printf("valor invalido. digite um valor maior que zero.\n");
    } else if (valor > saldo) {
        printf("saldo insuficiente.\n");
    } else {
        saldo -= valor;
        printf("saque realizado! novo saldo: R$ %.2f\n", saldo);
    }
    return saldo;
}

int main() {
    double saldo = 0;
    int opcao;

    do {
        mostrar_menu();
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("saldo atual: R$ %.2f\n", saldo);
                break;
            case 2:
                saldo = depositar(saldo);
                break;
            case 3:
                saldo = sacar(saldo);
                break;
            case 4:
                printf("ate logo!\n");
                break;
            default:
                printf("opcao invalida.\n");
        }
    } while (opcao != 4);

    return 0;
}  