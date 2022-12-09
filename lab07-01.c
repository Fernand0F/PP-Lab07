#include <stdio.h>
#include <string.h>

void main() {
    char string[100];

    printf("Digite um texto: ");
    fgets(string, 100, stdin);

    printf("%s", string);
}