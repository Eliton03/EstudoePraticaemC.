#include <stdio.h>

int main() {
  int idade = 20;
  char* resultado;

  resultado = (idade >= 18) ? "Maior de idade" : "Menor de idade";

  printf("Resultado: %s\n", resultado);

  return 0;
}


// Explicação:
// Neste código, utilizamos o operador ternário para verificar se a variável 'idade' é
// maior ou igual a 18. Se for, a variável 'resultado' recebe a string "Maior de idade";
// caso contrário, recebe "Menor de idade". Em seguida, imprim

// sintaxe do opertador ternário:
// condição ? valor_se_verdadeiro : valor_se_falso;
// No exemplo acima, a condição é 'idade >= 18'.
// Se a condição for verdadeira, 'resultado' recebe "Maior de idade",
// caso contrário, recebe "Menor de idade"..