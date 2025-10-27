#include <stdio.h>


// Estrutura de repetição  Do-while

int main () { 

    int numero; 

    do {

        printf("Digite um numero par para sair do peograma...\n");
        scanf("%d", &numero);

        if (numero % 2 == 0) // se o resto da divisao por 2 for igual a 0
        {
            printf("O numero %d é par! Programa encerrado.\n", numero); // imprime o valor de numero
        }
        else
        {
            printf("O numero %d é impar! Tente novamente.\n", numero); // imprime o valor de numero
        }

    } while (numero % 2 != 0); // enquanto o resto da divisao por 2 for diferente de 0

      printf("Fim do programa.\n");

    return 0;
} 