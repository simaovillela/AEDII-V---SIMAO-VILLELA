#include <stdio.h>
#include <string.h>

typedef struct {
    char marca[50];
    char modelo[50];
    int ano;
} Carro;

int compararModelos(Carro carro1, Carro carro2) {
    return strcmp(carro1.modelo, carro2.modelo) == 0;
}

int main() {
    Carro carro1, carro2;

    printf("Digite a marca do primeiro carro: ");
    fgets(carro1.marca, 50, stdin);
    carro1.marca[strcspn(carro1.marca, "\n")] = '\0';

    printf("Digite o modelo do primeiro carro: ");
    fgets(carro1.modelo, 50, stdin);
    carro1.modelo[strcspn(carro1.modelo, "\n")] = '\0';

    printf("Digite o ano de fabricação do primeiro carro: ");
    scanf("%d", &carro1.ano);
    getchar(); 

    printf("Digite a marca do segundo carro: ");
    fgets(carro2.marca, 50, stdin);
    carro2.marca[strcspn(carro2.marca, "\n")] = '\0';

    printf("Digite o modelo do segundo carro: ");
    fgets(carro2.modelo, 50, stdin);
    carro2.modelo[strcspn(carro2.modelo, "\n")] = '\0';

    printf("Digite o ano de fabricação do segundo carro: ");
    scanf("%d", &carro2.ano);

    if (compararModelos(carro1, carro2)) {
        printf("Os carros são do mesmo modelo.\n");
    } else {
        printf("Os carros são de modelos diferentes.\n");
    }

    return 0;
}
