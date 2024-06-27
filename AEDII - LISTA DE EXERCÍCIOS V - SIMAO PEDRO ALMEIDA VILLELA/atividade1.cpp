#include <stdio.h>
#include <stdlib.h>
#include <time.h>

float calcularMedia(int *array, int tamanho) {
    int soma = 0;
    for(int i = 0; i < tamanho; i++) {
        soma += array[i];
    }
    return (float)soma / tamanho;
}

int main() {
    int n;
    printf("Informe a quantidade de elementos do array: ");
    scanf("%d", &n);

    int *array = (int *)malloc(n * sizeof(int));
    if (array == NULL) {
        printf("Erro ao alocar memória\n");
        return 1;
    }

    srand(time(0));
    printf("Array gerado: ");
    for(int i = 0; i < n; i++) {
        array[i] = rand() % 100;
        printf("%d ", array[i]);
    }
    printf("\n");

    float media = calcularMedia(array, n);
    printf("A média dos elementos do array é: %.2f\n", media);

    free(array);
    return 0;
}
