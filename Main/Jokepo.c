#include <stdio.h> // Biblioteca padrão de entrada e saída 
#include <stdlib.h> // Biblioteca padrão para funções utilitárias
#include <time.h>  // Biblioteca para manipulação de tempo

int main() {
    int escolhaJogador, escolhaComputador;
    srand(time(0)); // Inicializa o gerador de números aleatórios

    printf("*** Jogo Jokempo ***\n");
    printf("Escolha sua jogada:\n");
    printf("1. Pedra\n");
    printf("2. Papel\n");
    printf("3. Tesoura\n");
    printf("Digite o número da sua escolha: \n");
    scanf("%d", &escolhaJogador);

    escolhaComputador = rand() % 3 + 1; // Gera uma escolha aleatória para o computador

    switch (escolhaJogador)
    {
      case 1:
        printf("Você escolheu Pedra.\n");
        break;
      case 2:
        printf("Você escolheu Papel.\n");
        break;
      case 3:
        printf("Você escolheu Tesoura.\n");
        break;
    
      default:
        printf("Escolha inválida.\n");
        break;
    }
    switch (escolhaComputador)
    {
      case 1:
        printf("computador escolheu Pedra.\n");
        break;
      case 2:
        printf("Computador escolheu Papel.\n");
        break;
      case 3:
        printf("Computador escolheu Tesoura.\n");
        break;
    }
     
    // logica do jogo

    if (escolhaComputador == escolhaJogador)
    {
        printf("Empate!\n");
    } else if ((escolhaJogador == 1 && escolhaComputador == 3) ||
               (escolhaJogador == 2 && escolhaComputador == 1) ||
               (escolhaJogador == 3 && escolhaComputador == 2)) {
        printf("Você venceu!\n");
    } else {
        printf("Computador venceu!\n");
    }
    
return 0;
}
