#include <stdio.h>

void letrasCapitalizar(char str[]) {
    printf("Antes: %s\n", str);
    if (str[0] >= 'a' && str[0] <= 'z')str[0]-=32;
    for (int i = 1; str[i] != '\0'; i++) {
        if (str[i-1] == ' ') {
            if (str[i] >= 'a' && str[i] <= 'z') str[i]-= 32;
        }
    }
    printf("Depois: %s\n", str);
}
int main() {
    char str[] = "Amanha sera um dia lindo";
    letrasCapitalizar(str);
    return 0;
}