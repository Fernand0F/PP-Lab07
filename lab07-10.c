#include <stdio.h>
#include <string.h>

void main() {
    char nome[30];
    float valor;

    printf("Nome da mercadoria: ");
    fgets(nome, 30, stdin);

    printf("Valor: ");
    scanf("%f", &valor);

    printf("\nNOME....................: %s", nome);
    printf("VALOR...................: %.2f", valor);
    printf("\nDESCONTO................: %.2f", valor*0.1);
    printf("\nVALOR A SER PAGO A VISTA: %.2f", valor*0.9);
}