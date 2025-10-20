<!-- Banner -->
<p align="center">
  <img src="https://capsule-render.vercel.app/api?type=waving&color=0:0a84ff,100:1e1e1e&height=180&section=header&text=Estudos%20em%20C%20💻&fontColor=ffffff&fontSize=40&fontAlignY=35&animation=fadeIn" />
</p>

<p align="center">
  <img src="https://img.shields.io/badge/Linguagem-C-blue?style=for-the-badge&logo=c&logoColor=white" />
  <img src="https://img.shields.io/badge/Status-Estudo%20Ativo-green?style=for-the-badge" />
  <img src="https://img.shields.io/badge/Progresso-Iniciante-lightgrey?style=for-the-badge" />
</p>

---

## 🧠 Sobre o Repositório

Este é o meu repositório de **estudo e prática da linguagem C**, criado para registrar meu progresso, organizar exercícios e testar conceitos aprendidos.

Atualmente, estou aprendendo:
> 🧩 **Estruturas de decisão simples** — explorando `if`, `if-else` e operadores relacionais.

---

## ⚙️ Estrutura do Repositório

📁 **/decisao_simples/**  
> Contém exercícios e exemplos práticos sobre estruturas de decisão.

Exemplo:
```c
#include <stdio.h>

int main() {
    int numero;

    printf("Digite um número: ");
    scanf("%d", &numero);

    if (numero > 0) {
        printf("O número é positivo.\n");
    } else if (numero < 0) {
        printf("O número é negativo.\n");
    } else {
        printf("O número é zero.\n");
    }

    return 0;
}
