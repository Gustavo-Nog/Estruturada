#include <stdio.h>

int main() {
    int i;
    int idade;
    float peso, altura, media_idades;
    float soma_idades = 0;
    int pessoas_com_peso_maior_que_80kg = 0;
    int pessoas_com_altura_menor_que_150cm = 0;
    int pessoas_com_idade_entre_10_e_30_e_altura_maior_que_190cm = 0;
    int total_pessoas = 5;

    // Loop que recebe os dados de 5 pessoas
    for (i = 1; i <= 5; i++) {
        printf("Informe a idade da pessoa %d: ", i);
        scanf("%d", &idade);
        printf("Informe o peso (em Kg) da pessoa %d: ", i);
        scanf("%f", &peso);
        printf("Informe a altura (em metros) da pessoa %d: ", i);
        scanf("%f", &altura);

        soma_idades += idade; // Acumula a soma das idades

        // Os if fazem a verificação para incrementar nas possíveis variáveis
        if (peso > 80) {
            pessoas_com_peso_maior_que_80kg++;
        }

        if (altura < 1.5) {            
            pessoas_com_altura_menor_que_150cm++;
        }

        if (idade >= 10 && idade <= 30 && altura > 1.9) {          
            pessoas_com_idade_entre_10_e_30_e_altura_maior_que_190cm++;
        }
    }

    media_idades = (soma_idades / total_pessoas);

    // Exibe os resultados
    printf("Média das idades das cinco pessoas: %.2f\n", media_idades);
    printf("Quantidade de pessoas com peso maior que 80Kg: %d\n", pessoas_com_peso_maior_que_80kg);
    printf("Quantidade de pessoas com altura inferior a 1,50m: %d\n", pessoas_com_altura_menor_que_150cm);
    printf("Quantidade de pessoas com idade entre 10 e 30 anos e altura superior a 1,90m: %d\n", pessoas_com_idade_entre_10_e_30_e_altura_maior_que_190cm);
    
    return 0;
}