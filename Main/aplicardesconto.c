#include <stdio.h>

int main() {
    int idade;
    float renda_mensal;

/* programa para verificar se uma pessoa está qualificda para um desconto 
especial com base mna idade e na renda mensal. 
A Pessoa deve ter 65 anos ou mais ou uma renda mensal inferior a R$ 2000,00
*/

printf("digite a sua idade: ");
scanf("%d", &idade);
printf("digite a sua renda mensal: ");
scanf("%f", &renda_mensal);

if(idade <= 18 || idade >= 65)
{
    if (renda_mensal < 2000.00)
    {
        printf(" Você tem direito ao desconto!\n");
    } else {
        printf("Você não tem direito ao desconto, devido á renda!\n");
    }
    printf("Aceito com relação a idade");
} else {
    printf("Você não está aceito com relação a idade\n");
}