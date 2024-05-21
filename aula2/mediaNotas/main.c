#include <stdio.h>

int main(void) {

    float nota1, nota2;

    printf("Digite a nota da primeira prova\n");
    scanf("%f", &nota1);

    printf("Digite a nota da segunda prova\n");
    scanf("%f", &nota2);

    float media = (nota1 + nota2) / 2;

    printf("A sua media total eh: %.2f", media);
    return 0;
}
