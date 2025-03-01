#include <stdio.h>
#include <math.h> // Inclui a biblioteca de matemática

int main() {
    double numero;

    printf("Digite um número positivo maior que zero: ");
    scanf("%lf", &numero);

    if (numero <= 0) {
        printf("O número inválido, informe um número maior que zero.\n");

    } else {
        double quadrado = numero * numero;
        double cubo = numero * numero * numero;
        double raiz_quadrada = sqrt(numero); // Usamos o 'sqrt' para fazer o calculo da raiz quadrada  
        double raiz_cubica = cbrt(numero);  // Usamos o 'cbrt' para fazer o calculo da raiz cubica 
        int resto_divisao_por_3 = (int)numero % 3;
        
        printf("1) O número ao quadrado: %.2lf\n", quadrado);
        printf("2) O número ao cubo: %.2lf\n", cubo);
        printf("3) A raiz quadrada do número: %.2lf\n", raiz_quadrada);
        printf("4) A raiz cubica do número: %.2lf\n", raiz_cubica);
        printf("5) O resto da divisao por 3: %d\n", resto_divisao_por_3);
    }

    return 0;
}