#include <stdio.h>

int main() {
    int vetor[3], opcao;

    printf("Digite os 3 números inteiros, um de cada vez:\n");
    scanf("%d", &vetor[0]);
    scanf("%d", &vetor[1]);
    scanf("%d", &vetor[2]);

    // Exibe o menu com opções para o usuário
    printf("\nQual opção você deseja?\n"
           "1 - Mostre os números em ordem crescente.\n"
           "2 - Mostre os números em ordem decrescente.\n"
           "3 - Mostre o menor número entre os demais.\n"
           "4 - Mostre o maior número entre os demais.\n"
        );
    scanf("%d", &opcao);

    // verifica se a opção escolhida pelo usuário foi a 1
    if (opcao == 1) { // Ordena os valores em ordem crescente
        if (vetor[0] > vetor[1]) {
            int localtemporario = vetor[0]; /* Guarda o valor do vetor[0] 
            temporariamente para realocaçâo */
            vetor[0] = vetor[1];
            vetor[1] = localtemporario;
        }
        if (vetor[0] > vetor[2]) {
            int localtemporario = vetor[0];
            vetor[0] = vetor[2];
            vetor[2] = localtemporario;
        }
        if (vetor[1] > vetor[2]) {
            int localtemporario = vetor[1];
            vetor[1] = vetor[2];
            vetor[2] = localtemporario;
        }
        // Exibe os números em ordem crescente
        printf("Números em ordem crescente: %d - %d - %d\n", vetor[0], vetor[1], vetor[2]);
    
    // verifica se a opção escolhida pelo usuário foi a 2
    } else if (opcao == 2) { // Ordena os valores em ordem decrescente
        if (vetor[0] < vetor[1]) {
            int localtemporario = vetor[0];
            vetor[0] = vetor[1];
            vetor[1] = localtemporario;
        }
        if (vetor[0] < vetor[2]) {
            int localtemporario = vetor[0];
            vetor[0] = vetor[2];
            vetor[2] = localtemporario;
        }
        if (vetor[1] < vetor[2]) {
            int localtemporario = vetor[1];
            vetor[1] = vetor[2];
            vetor[2] = localtemporario;
        }
        // Exibe os números em ordem decrescente
        printf("Números em ordem decrescente: %d - %d - %d\n", vetor[0], vetor[1], vetor[2]);

    // verifica se a opção escolhida pelo usuário foi a 3
    } else if (opcao == 3) { // Escolhe o menor número entre os três
        int menor = vetor[0]; // Assume que o primeiro número é o menor dos três
        if (vetor[1] < menor) {
            menor = vetor[1];
        } if (vetor[2] < menor) {
            menor = vetor[2];
        }
        // Exibição do menor número 
        printf("O menor número entre os demais é: %d\n", menor);

    // Verificação se a opção escolhida pelo usuário é a 4
    } else if (opcao == 4) {
        int maior = vetor[0];
        if (vetor[1] > maior)  {
            maior = vetor[1];
        } if (vetor[2] > maior) {
            maior = vetor[2];
        }
        // Exibição do maior número
        printf("O maior número entre os demais é: %d\n", maior);
    
    
    } else {
        printf("Opção inválida\n");
    }
    
    return 0;
}