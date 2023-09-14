#include <stdio.h>

int main() {
    int cigarrosPorDia, anosFumados;

    printf("Digite a quantidade de cigarros fumados por dia: ");
    scanf("%d", &cigarrosPorDia);

    printf("Digite quantos anos voce ja fumou: ");
    scanf("%d", &anosFumados);

    int minutosPerdidos = cigarrosPorDia * 10 * anosFumados * 365;

    int diasPerdidos = minutosPerdidos / 1440;

    printf("Voce perderá aproximadamente %d dias de vida devido ao tabagismo.\n", diasPerdidos);

    return 0;
}
