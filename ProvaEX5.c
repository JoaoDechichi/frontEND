#include <stdio.h>
#include <stdlib.h>
#include <math.h>

 
int i, valor;

int main(){

    printf("insira um valor positivo: \n");
    scanf("%d", &valor);

    
    for (i = 1; i <= valor; i++)
    {
        if (valor % i==0)
        {
            printf("%d\n", i);
        }
        
    }
    



    return 0;
}

