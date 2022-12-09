#include <stdio.h>
#include <string.h>

void main() {
    char p1[30], carac;
    int len, c, count = 0;

    printf("Digite uma palavra: ");
    fgets(p1, 30, stdin);

    len = strlen(p1);

    printf("Digite um caractere: ");
    scanf("%c", &carac);

    for (c = 0; c < len; c++) {
        if ((p1[c] == 'a')||(p1[c] == 'e')||(p1[c] == 'i')||(p1[c] == 'o')||(p1[c] == 'u')||(p1[c] == 'A')||(p1[c] == 'E')||(p1[c] == 'I')||(p1[c] == 'O')||(p1[c] == 'U')) {
            count++;

            p1[c] = carac;
        }
    }

    printf("\nQuantidade de vogais: %d", count);
    printf("\nPalavra com as vogais trocadas pelo caratere digitado: %s", p1);
}