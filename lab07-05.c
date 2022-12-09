#include <stdio.h>
#include <string.h>

void main() {
    char str[100];
    int len, i;

    printf("Digite uma cadeia de caracteres: ");
    fgets(str, 100, stdin);

    len = strlen(str);

    for (i = 0; i < len; i++) {
        if ((str[i] >= 65)&&(str[i] <= 90)) {
            str[i] += 32;
        }
    }

    printf("%s", str);
}