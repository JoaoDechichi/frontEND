#include <stdio.h>

int main() {
    int Num[10];
    int soma = 0;

    printf("Digite 10 números inteiros:\n");

    for(int i = 0; i < 10; i++) {
        scanf("%d", &Num[i]);
        soma += Num[i];
    }
 
    float media = (float) soma / 10;

    printf("A média dos números digitados é %.2f.\n", media);

    return 0;
}
