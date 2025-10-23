#include <stdio.h>

int main() {
    int idade;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    // Criança, adolescente ou adulto, idoso. 

    // Criança: 0-12 anos
    // Adolescente: 13-17 anos
    // Adulto: 18 anos até 64 anos
    // Idoso: 65 anos ou mais

     if (idade >=65){
        printf("Idoso\n");
        } else if (idade >=18){
            printf("Adulto\n");
        } else if (idade >=13){
            printf("Adolescente\n");
        } else if (idade >=0){
            printf("Criança\n");
        } else {
            printf("Idade inválida\n");
        }
    return 0;
}
        