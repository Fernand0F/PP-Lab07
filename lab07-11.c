#include <stdio.h>
#include <string.h>

void main() {
    char t1[100];
    int i, j;

    printf("Digite um texto: ");
    fgets(t1, 100, stdin);

    printf("Digite um inteiro nao negativo: ");
    scanf("%d", &i);

    printf("Digite outro inteiro nao negativo: ");
    scanf("%d", &j);

    for (i; i <= j; i++) {
        printf("%c", t1[i]);
    }
}