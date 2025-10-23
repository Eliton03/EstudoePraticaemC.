#include <stdio.h>

int main() {
    int idade;
    float renda_mensal;

    /* Programa para verificar se uma pessoa está qualificada
       para um desconto especial com base na idade e na renda mensal.
       A pessoa deve ter 65 anos ou mais OU uma renda mensal inferior a R$ 2000,00.
    */

    printf("Digite a sua idade: ");
    scanf("%d", &idade);

    printf("Digite a sua renda mensal: ");
    scanf("%f", &renda_mensal);

    if (idade >= 65 || renda_mensal < 2000.00) {
        printf("Você tem direito ao desconto!\n");
    } else {
        printf("Você não tem direito ao desconto.\n");
    }

    return 0;
}
