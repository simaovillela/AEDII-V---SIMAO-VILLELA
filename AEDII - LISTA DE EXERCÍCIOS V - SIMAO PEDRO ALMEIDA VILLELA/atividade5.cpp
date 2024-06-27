#include <stdio.h>

int calcularMDC(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int num1, num2;
    printf("Digite dois números inteiros: ");
    scanf("%d %d", &num1, &num2);

    int mdc = calcularMDC(num1, num2);
    printf("O MDC de %d e %d é: %d\n", num1, num2, mdc);

    return 0;
}
