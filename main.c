#include <stdio.h>

void mostrar_menu() {
    printf("\n===== CAIXA ELETRONICO =====\n");
    printf("1) Ver saldo\n");
    printf("2) Depositar\n");
    printf("3) Sacar\n");
    printf("4) Sair\n");
    printf("Escolha uma opcao: ");
}

double depositar(double saldo) {
    double valor;
    printf("Valor do deposito: R$ ");
    scanf("%lf", &valor);

    if (valor <= 0) {
        printf("Valor invalido. Digite um valor maior que zero.\n");
    } else {
        saldo += valor;
        printf("Deposito realizado! Novo saldo: R$ %.2f\n", saldo);
    }
    return saldo;
}

double sacar(double saldo) {
    double valor;
    printf("Valor do saque: R$ ");
    scanf("%lf", &valor);

    if (valor <= 0) {
        printf("Valor invalido. Digite um valor maior que zero.\n");
    } else if (valor > saldo) {
        printf("Saldo insuficiente.\n");
    } else {
        saldo -= valor;
        printf("Saque realizado! Novo saldo: R$ %.2f\n", saldo);
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
                printf("Saldo atual: R$ %.2f\n", saldo);
                break;
            case 2:
                saldo = depositar(saldo);
                break;
            case 3:
                saldo = sacar(saldo);
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