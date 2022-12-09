#include <stdio.h>
#include <string.h>

void main() {
    char t1[100], l1, l2;
    int len, i;

    printf("Digte um texto: ");
    fgets(t1, 100, stdin);

    printf("Digite uma letra: ");
    scanf(" %c", &l1);

    printf("Digite outra letra: ");
    scanf(" %c", &l2);

    len = strlen(t1);

    for (i = 0; i < len; i++) {
        if (t1[i] == l1) {
            t1[i] = l2;
        }
    }

    printf("%s", t1);
}