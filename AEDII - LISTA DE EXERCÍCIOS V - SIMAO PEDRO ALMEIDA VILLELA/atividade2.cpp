#include <stdio.h>
#include <string.h>

int contarConsoantes(char *str) {
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        char c = str[i];
        if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) {
            c = tolower(c);
            if (!(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')) {
                count++;
            }
        }
    }
    return count;
}

int main() {
    char str[100];
    printf("Digite uma string: ");
    fgets(str, 100, stdin);

    int consoantes = contarConsoantes(str);
    printf("O número de consoantes na string é: %d\n", consoantes);

    return 0;
}
