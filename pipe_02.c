#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, soma = 0, soma1 = 0;

    for(i =1; i <= 10; i++)
        if(i % 2 == 1)
            soma += i;
   
    for(i =1; i <= 10; i++)
        if(i % 2 == 0)
            soma1 += i;        
           

    printf("Soma dos impares de 1 a 10: %d\n\n", soma);
    printf("Soma dos pares de 1 a 10: %d\n\n", soma1);
    printf("Soma dos valores: %d\n\n", soma1+soma);
}