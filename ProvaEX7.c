#include <stdio.h>


int num, i;
int PrimeiroNum = 0, SegundoNum = 1, Enesimo;

int main() {
 

    printf("Digite o valor de n: ");
    scanf("%d", &num);

    if (num == 0) {
        Enesimo = PrimeiroNum;
    } else if (num == 1) {
        Enesimo = SegundoNum;
    } else {
        for (i = 2; i <= num; i++) {
            Enesimo = PrimeiroNum + SegundoNum;
            PrimeiroNum = SegundoNum;
            SegundoNum = Enesimo;
        }
    }

    printf("O valor do enesimo termo da sequencia de Fibonacci e: %d", Enesimo);

    return 0;
}
