#include <stdio.h>
#include <stdlib.h>
#include <math.h>

 
float x1, x2, yy1, y2, dist;

int main(){

    printf("Insira o valor do primeiro ponto respectivamente a x e y: \n");
    scanf("%f %f", &x1, &yy1);

    printf("Insira os valores do segundo ponto: \n");
    scanf("%f %f", &x2, &y2);

    dist = sqrt(pow(x2-x1,2) + pow(y2-yy1,2));

    printf("o valor da distancia eh: %.4f", dist);






    return 0;
}