#include <stdio.h> 

int main () {
    // Declaração das variáveis
    int numero =4, resultado;

   // fazer a operação de percentual

    resultado = (numero % 2);

    // Exibir o resultado
    printf("A varialvel Resultado é : %d\n", resultado);

    // Verificar se o número é par ou ímpar
    // Se o resultado for diferente de zero, o número é ímpar
    // Se o resultado for igual a zero, o número é par
    // Estrutura condicional para verificar se o número é ímpar
    // Usando if simples

    
    if (resultado ==0) {
        printf("o numero e par\n"); 
    }

}