#include <stdio.h>
#include <string.h>

void main() {
    char carro[5][30];
    float consumo[5];
    int i, temp = 0;

    for (i = 0; i < 5; i++) {
        printf("Digite o nome de um carro: ");
        gets(carro[i]);
    }

    for (i = 0; i < 5; i++) {
        printf("Digite o consumo de um %s (quilometros/litro): ", carro[i]);
        scanf("%f", &consumo[i]);
    }


    for (i = 1; i < 5; i++) {
        if (consumo[temp] < consumo[i]) {
            temp = i;
        }
    }


    printf("\na) O carro mais economico eh o %s", carro[temp]);
    printf("\n\nb) Combustivel neccessario para percorrer 1000 km");
    
    for (i = 0; i < 5; i++) {
        printf("\n   %s: %.2f L", carro[i], 1000 / consumo[i]);
    }
}