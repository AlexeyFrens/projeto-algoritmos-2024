#include <stdio.h>

int main(void) {
    int numero;

    printf("Digite um numero\n");
    scanf("%d", &numero);

    printf("----------------------------\n");
    printf("Se o resultado for 0 eh Par\n");
    printf("Se o resultado for 1 eh Impar\n");
    printf("----------------------------\n");
    printf("O resultado eh: %d", numero % 2);

    return 0;
}
