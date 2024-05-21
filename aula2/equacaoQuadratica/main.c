#include <stdio.h>

int main(void) {
    int a, b, c;

    printf("Digite o valor A:\n");
    scanf("%d", &a);

    printf("Digite o valor B:\n");
    scanf("%d", &b);

    printf("Digite o valor C:\n");
    scanf("%d", &c);

    int delta = (b * b) - 4 * a * c;

    printf("A equacao quadratica dos numeros fornecidos eh: %d", delta);

    return 0;
}
