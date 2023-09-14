#include <stdio.h>

int main() {
    float salario, aumento;

    printf("Digite o valor do salario atual: ");
    scanf("%f", &salario);

    printf("Digite a porcentagem de aumento: ");
    scanf("%f", &aumento);

    aumento = salario * (aumento / 100);
    salario = salario + aumento;

    printf("O aumento no salario foi de R$%.2f\n", aumento);
    printf("O novo salario é de R$%.2f\n", salario);

    return 0;
}