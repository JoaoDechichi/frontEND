#include <stdio.h>
#include <stdlib.h>

int Num, maior, menor;

int main(){
    printf("Digite um numero positivo: \n");
    scanf("%d", Num);
 
    Num=maior=menor;

    while (Num>=0)
    {
        if (Num>maior)
        {
            maior=Num;
        }
        if (Num<menor)
        {
            menor=Num;
        }
        printf("Digite um numero negativo para parar o loop (inteiro):\n");
        scanf("%d",&Num);

        
    }
    
    printf("O maior numero eh: %d\n", maior);
    printf("O menor numero eh: %d", menor);

    



    return 0;
}