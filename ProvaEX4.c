#include <stdio.h>

int main() {
    float x, y;
 
    printf("Insira o valor das variaveis no pao cartesiano respectivamente x e y: \n");
    scanf("%f %f", &x, &y);

    if (x == 0 && y == 0) {
        printf("O ponto esta na origem\n");
    } else if (x == 0) {
        printf("O ponto esta no Eixo Y\n");
    } else if (y == 0) {
        printf("O ponto esta no Eixo X\n");
    } else if (x > 0 && y > 0) {
        printf("O ponto esta no Quadrante 1\n");
    } else if (x < 0 && y > 0) {
        printf("O ponto esta no Quandrante 2\n");
    } else if (x < 0 && y < 0) {
        printf("O ponto esta no Quadrante 3\n");
    } else {
        printf("O ponto esta no Quadrante 4\n");
    }

    return 0;
}
