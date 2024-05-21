#include <stdio.h>

int main(void) {

    float numero1, numero2, numero3;

    printf("Digite 3 numeros\n");
    scanf("%f %f %f", &numero1, &numero2, &numero3);

    float media = (numero1 + numero2 + numero3) / 3;

    printf("A media eh: %f", media);

    return 0;
}
