#include <stdio.h>
#include <string.h>

void main() {
    char t1[60], t2[30];
    int n, len, i;

    printf("Digite um texto: ");
    fgets(t1, 30, stdin);

    printf("Digite outro texto: ");
    fgets(t2, 30, stdin);

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &n);

    len = strlen(t1);

    for (i = 0; i < n; i++) {
        t1[len - 1] = t2[i];
        len++;
    }

    t1[len - 1] = '\0';

    printf("%s", t1);
}