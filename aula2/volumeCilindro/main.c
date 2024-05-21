#include <stdio.h>

int main(void) {

    float raio, altura;

    printf("Qual eh o raio do cilindro?\n");
    scanf("%f", &raio);

    printf("Qual eh a altura do cilindro?\n");
    scanf("%f", &altura);

    float volume = 3.14 * (raio * raio) * altura;

    printf("O volume do cilindro eh: %.2f", volume);

    return 0;
}
