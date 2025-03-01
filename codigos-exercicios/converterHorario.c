#include <stdio.h>

int main(){
    float hora_usuario;
    
    printf("Digite um horario no formato HH.MM: ");
    scanf("%f",&hora_usuario);

    int horas = (int) hora_usuario;
    int min = (int) ((hora_usuario - horas) * 100);
    
    // Verifica a hora digitada pelo úsuario
    if (horas > 23 || horas < 0) { 
        printf("Esse horario é i) hora_unvalido. Informe um horario entre 00h as 23h\n");
        return 0;
    }

    // Verificação para minutos 
    if (min > 59 || min < 0) { 
        printf("Esses minutos não existem. informe a minutagem entre 0 min a 59 min.\n");
        return 0;
    }

    // Converte horas e minutos para minutos totais
    int horas_minutos = ((horas * 60) + min);

    // Converte horas e minutos para segundos totais
    int horas_segundos = ((horas * 3600) + (min * 60));

    printf("Horas em minutos: %d\n", horas_minutos); 
    printf("Horas em segundos: %d\n", horas_segundos);

    return 0;
}