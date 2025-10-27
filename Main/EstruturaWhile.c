#include <stdio.h>


// Estrutura de repetição - while

int main () { 

int i = 0;


while (i <= 10) //enquanto i for menor ou igual a 10
{
    if (i % 2 == 0) // se o resto da divisao por 2 for igual a 0
    {
        printf("O numero %d é par!\n", i); // imprime o valor de i
    }

    i++; // incrementa o valor de i
}


return 0;
}