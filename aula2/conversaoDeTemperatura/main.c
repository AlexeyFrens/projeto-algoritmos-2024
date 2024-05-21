#include <stdio.h>

int main(void) {

    float celsius;

    printf("Digite o grau celsius para converter\n");
    scanf("%f", &celsius);

    float converter = celsius * (9 / 5) + 32;

    printf("%.2f graus celsius eh %.2f farenheit", celsius, converter);

    return 0;
}
