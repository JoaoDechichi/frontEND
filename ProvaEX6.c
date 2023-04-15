#include <stdio.h>


int soma = 0;
int count;
 

int main() {
    

    for (count = 1; count < 1000; count++) {
        if (count % 3 == 0 || count % 5 == 0) {
            soma += count;
        }
    }

    printf("A soma dos multiplos de 3 e 5 abaixo de 1000 eh: %d\n", soma);

    return 0;
}
