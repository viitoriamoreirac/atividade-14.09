#include <stdio.h>

int main() {
    float distancia, velocidadeMedia, tempo;

    printf("Digite a distancia a percorrer (em quilometros): ");
    scanf("%f", &distancia);

    printf("Digite a velocidade media esperada (em km/h): ");
    scanf("%f", &velocidadeMedia);

    tempo = distancia / velocidadeMedia;

    printf("O tempo estimado da viagem e de %.2f horas.\n", tempo);

    return 0;
}
