#include <stdio.h>

void calcularIMC(float peso, float altura) {
    float imc = peso / (altura * altura);
    printf("Seu IMC é: %.2f\n", imc);

    if (imc < 18.5) {
        printf("Abaixo do peso\n");
    } else if (imc < 25) {
        printf("Peso normal\n");
    } else if (imc < 30) {
        printf("Sobrepeso\n");
    } else if (imc < 35) {
        printf("Obesidade (grau I)\n");
    } else if (imc < 40) {
        printf("Obesidade (grau II)\n");
    } else {
        printf("Obesidade mórbida (grau III)\n");
    }
}

int main() {
    float peso, altura;
    printf("Digite seu peso (kg): ");
    scanf("%f", &peso);
    printf("Digite sua altura (m): ");
    scanf("%f", &altura);

    calcularIMC(peso, altura);

    return 0;
}
