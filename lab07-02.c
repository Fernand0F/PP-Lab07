#include <stdio.h>
#include <string.h>

void main() {
    char string[100];
    int c, count = 0;

    printf("Digite um texto: ");
    fgets(string, 100, stdin);

    for (c = 0; c < strlen(string); c++) {
        if (string[c] == '1') count ++;
    }

    printf("A quantidade de 1 no texto eh %d", count);
}