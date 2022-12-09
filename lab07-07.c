#include <stdio.h>
#include <string.h>

void main() {
    char t1[100];
    int len, i, j;

    printf("Digite um texto: ");
    fgets(t1, 100, stdin);

    len = strlen(t1);

    for (i = 0; i < len; i++) {
        if (t1[i] == ' '){
            for (j = i; j < len; j++) {
                t1[j] = t1[j+1];
            }
        }
    }

    printf("%s", t1);
}