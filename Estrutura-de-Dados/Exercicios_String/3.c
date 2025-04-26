#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "quarta";
    char str2[] = "segunda";
    int tam = strlen(str);
    int tam2 = strlen(str2);
    char str3[tam+tam2];
    int j = 0;
    for (int i = 0; i < tam || i < tam2; i++) {
        if (i < tam) {
            str3[j] = str[i];
            j++;
        }
        if (i < tam2) {
            str3[j] = str2[i];
            j++;
        }
    }
    str3[j] = '\0';
    printf("String 1: %s\nString 2: %s\nString 3: %s (Intercalada com a String 1 e 2)\n", str, str2, str3);
    return 0;
}