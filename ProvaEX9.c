#include <stdio.h>

// Tabela de preços das frutas
float precos[] = {5.00, 1.00, 4.00};
char *frutas[] = {"ABACAXI", "MAÇA", "PERA"};

int main() {
    int opcao, quantidade;
    float total = 0.0;
    int carrinho[3] = {0};
 
    printf("*** BEM-VINDO(A) À FEIRA DE FRUTAS ***\n\n");

    // Loop principal do programa
    while(1) {
        printf("Escolha a fruta que deseja comprar:\n");
        printf("1 => ABACAXI – R$ 5,00 a unidade\n");
        printf("2 => MAÇA – R$ 1,00 a unidade\n");
        printf("3 => PERA – R$ 4,00 a unidade\n");
        printf("0 => FINALIZAR COMPRA\n\n");

        printf("Opção escolhida: ");
        scanf("%d", &opcao);

        if(opcao < 0 || opcao > 3) {
            printf("\nOpção inválida! Tente novamente.\n\n");
            continue;
        }

        if(opcao == 0) {
            break;
        }

        printf("Digite a quantidade desejada: ");
        scanf("%d", &quantidade);

        if(quantidade < 1) {
            printf("\nQuantidade inválida! Tente novamente.\n\n");
            continue;
        }

        carrinho[opcao - 1] += quantidade;

        printf("\n%s x %d adicionado(s) ao carrinho.\n\n", frutas[opcao - 1], quantidade);
    }

    printf("Resumo da compra:\n");

    for(int i = 0; i < 3; i++) {
        if(carrinho[i] > 0) {
            printf("%s x %d = R$ %.2f\n", frutas[i], carrinho[i], carrinho[i] * precos[i]);
            total += carrinho[i] * precos[i];
        }
    }

    printf("Total da compra: R$ %.2f\n", total);

    return 0;
}
