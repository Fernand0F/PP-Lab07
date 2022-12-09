#include <stdio.h>
#include <string.h>

void main() {
    char p1[30], p2[30];
    int len, c;

    printf("Digite uma palavra: ");
    fgets(p1, 100, stdin);

    len = strlen(p1);

    for (c = len - 2; p1[c] != '\n'; c--) {
        p2[len-(c+2)] = p1[c];
    }

    printf("%s", p2);

}