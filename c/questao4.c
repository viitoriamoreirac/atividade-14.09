#include <stdio.h>

int main() {
    float kmPercorridos, diasAlugados, precoTotal;

    printf("Digite a quantidade de km percorridos: ");
    scanf("%f", &kmPercorridos);

    printf("Digite a quantidade de dias de aluguel: ");
    scanf("%f", &diasAlugados);

    precoTotal = (60 * diasAlugados) + (0.15 * kmPercorridos);

    printf("O preco a pagar pelo aluguel do carro é de R$%.2f\n", precoTotal);

    return 0;
}
