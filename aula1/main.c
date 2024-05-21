#include <stdio.h>

int main(void) {
    printf("Bom dia!\n");

    printf("Estou aprendendo a programar.\n");

    printf("Definitivamente nao eh \"muito\" dificil.\n");

    printf("Suas notas sao %d e %d e sua media eh %d\n", 4, 4, (4+4)/2);

    printf("Vamos distribuir 359 carros para 4 pessoas e portanto devem sobrar %d carros\n", 359 % 4);

    int raio = 5;

    printf("Eu tenho um circulo de raio %d.\n", raio);

    printf("Portanto o meu diametro eh %d\n", raio * 2);

    printf("A area eh %f\n", 3.14 * (raio * raio));

    printf("E a medida da circunferencia eh %f\n", (2 * 3.14) * raio);
    return 0;
}
