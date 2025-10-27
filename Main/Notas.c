#include <stdio.h>

// desenvolver um programa que gerencia a notas dos estudades
// definir o status do estudante com base na nota 
// menu para o usuario escolher entre diferentes opcoes operaçoes 

int main() {
    int opcao;
    float nota1, nota2, media;

    printf("*** Gerenciador de Notas dos Estudantes ***\n");
    printf("1. Calcular Média \n");
    printf("2. determinar Status do Estudante\n");
    printf("3. sair\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);


    switch(opcao){
    case 1:
      printf("caulcular média.\n");
      printf("Digite a primeira nota: ");
        scanf("%f", &nota1);
        printf("Digite a segunda nota: ");
        scanf("%f", &nota2);
        
        if (nota1 < 0 || nota1 > 10 || nota2 < 0 || nota2 > 10) {
            printf("Notas inválidas. As notas devem estar entre 0 e 10.\n");
        } else {
            media = (nota1 + nota2) / 2;
            printf("A média do estudante é: %.2f\n", media);
        }
         if (media >= 5)
            {
                printf("Estudante Aprovado.\n");
            } else 
            printf("Estudante Reprovado.\n");
        break;
    case 2:
        printf("determinar status do estudante.\n");
        printf("Digite a Media: ");
        scanf("%f", &media);
        media >= 5 ? printf("Estudante Aprovado.\n") : printf("Estudante Reprovado.\n");         
        break;
    case 3:
        printf("saindo do programa.\n");
        break;
    default:
        printf("opção inválida.\n");
        break; 
    }

    return 0;
}   