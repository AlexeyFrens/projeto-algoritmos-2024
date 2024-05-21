#include <stdio.h>

int main(void) {
    int quantidadeDeHomens, quantidadeDeMulheres;
    int valorHomem = 20;
    int valorMulher = 17;

    printf("Quantos homens compareceram na festa?\n");
    scanf("%d", &quantidadeDeHomens);

    printf("Quantas mulheres compareceram na festa?\n");
    scanf("%d", &quantidadeDeMulheres);

    int somaHomem = quantidadeDeHomens * valorHomem;
    int somaMulher = quantidadeDeMulheres * valorMulher;
    int totalGanho = somaHomem + somaMulher;

    printf("O total de dinheiro ganho na festa eh: %d", totalGanho);

    return 0;
}
