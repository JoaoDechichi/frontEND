#include <stdio.h>
#include <stdlib.h>

float raio, area, volume;
const double pi = 3.14159;


int main(){

    printf("Informe o valor do raio da esfera em questao: \n");
    scanf("%f", &raio);

 
    area = 4.0 * pi * (raio*raio);
    volume = ((4.0/3) * pi * (raio*raio*raio));


    printf("A area eh: %.4f\n", area);
    printf("E o volume eh: %.4f\n", volume);




    return 0;
}