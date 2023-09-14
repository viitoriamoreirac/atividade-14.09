#include <stdio.h>

int main() {
    float preco, desconto;

    printf("Digite o valor do preco atual: ");
    scanf("%f", &preco);

    printf("Digite a porcentagem de desconto: ");
    scanf("%f", &desconto);

    desconto = preco * (desconto / 100);
    preco = preco - desconto;

    printf("O desconto no preco foi de R$%.2f\n", desconto);
    printf("O novo preco é de R$%.2f\n", preco);

    return 0;
}