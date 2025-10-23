#include <stdio.h>

// Aprimeira condição: Idade do usuario esta entre 18 e 65 anos.
// A Segunda condição: A renda Mensal ser menor que 3.000,00
// A terceira condição: Verificar se o usuario possui dependentes maior que 2. 

int main() { 

    int idade, dependentes; 
    float renda_mensal;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("Digite sua renda mensal: ");
    scanf("%f", &renda_mensal);

    printf("Digite o número de dependentes: ");
    scanf("%d", &dependentes);

    if (idade >=18 && idade < 65) {

        if (renda_mensal < 3000.00) {
        
            if (dependentes > 2) {
                printf("Você se qualifica para o desconto!\n");
            } else {
                printf("Você não se qualifica para o desconto: número de dependentes insuficiente.\n");
            }
        } else {
            printf("Você não se qualifica para o desconto: renda mensal muito alta.\n");
        }
    } else {
        printf("Você não se qualifica para o desconto: idade fora do intervalo permitido.\n");
    }
}