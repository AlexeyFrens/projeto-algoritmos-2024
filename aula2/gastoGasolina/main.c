#include <stdio.h>

int main(void) {
    float distanciaPercorrida, gasolinaGasta;

    printf("Qual foi a distancia em kilometros percorrida?\n");
    scanf("%f", &distanciaPercorrida);

    printf("Quantos litros de gasolina foram gastos no trajeto?\n");
    scanf("%f", &gasolinaGasta);

    float media = distanciaPercorrida / gasolinaGasta;

    printf("A media de gasto de seu carro eh: %.2f km/l", media);

    return 0;
}
