#include <stdio.h>
#include<stdlib.h>

float a, b, c, d;
float result;

int main(){

    printf("Insira os valores de A, B, C e D: \n");
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);
    scanf("%f", &d);

    result=((a*b)-(c*d));

    printf("DIFERENCA = (%.2f * %.2f) - (%.2f * %.2f)\n", a, b, c, d);
    printf("DIFERENCA = (%.2f)", result); 






    return 0;
}