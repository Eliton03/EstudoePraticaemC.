#include <stdio.h> // Biblioteca padrão de entrada e saída 
#include <stdlib.h> // Biblioteca padrão para funções utilitárias
#include <time.h>  // Biblioteca para manipulação de tempo

int main() { 
  int opcao; // Variável para armazenar a opção do menu
  int numeroSecreto, palpite; // Variáveis para o jogo de adivinhação

  printf("Menu Principal\n");  // Exibe o menu principal
  printf("1. Iniciar Jogo\n");  // Opção para iniciar o jogo
  printf("2. Ver Regras\n");
  printf("3. Sair\n");
  printf("Escolha uma opção: \n");
  scanf("%d", &opcao);   // Lê a opção escolhida pelo usuário

 switch (opcao) { // Estrutura de controle para tratar as opções do menu
    case 1: 
      srand(time(0)); // Inicializa o gerador de números aleatórios
      numeroSecreto = rand() % 10 + 1; // Gera um número aleatório entre 1 e 10
      printf("Adivinhe o número (entre 1 e 10): \n"); // Solicita ao usuário que adivinhe o número
      scanf("%d", &palpite); // Lê o palpite do usuário

      if (palpite == numeroSecreto) { // Verifica se o palpite está correto
        printf("Parabéns! Você acertou!\n");
      } else {
        printf("Você errou. O número era %d.\n", numeroSecreto);
      }
      break;
    case 2: // Exibe as regras do jogo
      printf("Regras do Jogo:\n");
      printf("1. Escolha uma opção no menu.\n");
      printf("2. Se você escolher 'Iniciar Jogo', adivinhe o número secreto.\n");
      printf("3. O jogo termina quando você escolhe 'Sair'.\n");
      break;
    case 3:
      printf("Saindo...\n");
      break;
    default:
      printf("Opção inválida. Tente novamente.\n");
  }

  return 0;
}