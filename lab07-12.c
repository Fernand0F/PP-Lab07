#include <stdio.h>
#include <string.h>

void main() {
    char texto[100];
    int i, len;

    printf("Digite um texto: ");
    fgets(texto, 100, stdin);

    len = strlen(texto);

    for (i = 0; i < len - 1; i++) {
        if ((texto[i] >= 65) && (texto[i] <= 90)) {
            if (texto[i] >= 88) {
                texto[i] = texto[i] - 23;
            }
            else {
                texto[i] = texto[i] + 3;
            }
        }
        else if ((texto[i] >= 97) && (texto[i] <= 122)) {
            if (texto[i] >= 120) {
                texto[i] = texto[i] - 55;
            }
            else {
                texto[i] = texto[i] - 29;
            }
        }
    }

    printf("Texto criptografado: %s", texto);
}