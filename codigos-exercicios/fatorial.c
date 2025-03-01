#include <stdio.h>

#define MAX_DIGITOS 100 // Número máximo de dígitos para o fatorial

void multiplicar(int resultado[], int numero, int *numDigitos) {
    int carry = 0; 

    for (int i = 0; i < *numDigitos; i++) {
        int produto = resultado[i] * numero + carry;
        resultado[i] = produto % 10; // Armazena o dígito atual
        carry = produto / 10;   
    }

    // Adiciona os dígitos restantes do carry
    while (carry > 0) {
        resultado[*numDigitos] = carry % 10;
        carry /= 10;
        (*numDigitos)++;
    }
}

void calcularFatorial(int n) {
    int resultado[MAX_DIGITOS] = {0}; // Array para armazenar o fatorial
    resultado[0] = 1;                // Fatorial de 0 e 1 é 1
    int numDigitos = 1;              // Número inicial de dígitos

    // Calcula o fatorial
    for (int i = 2; i <= n; i++) {
        multiplicar(resultado, i, &numDigitos);
    }

    // Exibe o resultado
    printf("Fatorial de %d! = ", n);

    for (int i = numDigitos - 1; i >= 0; i--) {
        printf("%d", resultado[i]);
    }
    printf("\n");
}

int main() {
    while (1) {
        int n;
        printf("Digite um número (ou 0 para sair): ");
        scanf("%d", &n);

        if (n == 0) {
            break; // Sai do loop se o usuário digitar 0
        } else if (n < 0) {
            printf("Número inválido. Digite um número positivo.\n");
        } else if (n > 100) {
            printf("Número muito grande. O limite e 100.\n");
        } else {
            calcularFatorial(n); // Calcula e exibe o fatorial
        }
    }

    printf("Programa encerrado.\n");
    return 0;
}