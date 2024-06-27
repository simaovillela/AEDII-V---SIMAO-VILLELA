#include <stdio.h>
#include <string.h>

typedef struct {
    char titulo[100];
    char autor[100];
    int ano;
} Livro;

Livro livroMaisRecente(Livro livros[], int tamanho) {
    Livro maisRecente = livros[0];
    for (int i = 1; i < tamanho; i++) {
        if (livros[i].ano > maisRecente.ano) {
            maisRecente = livros[i];
        }
    }
    return maisRecente;
}

int main() {
    Livro livros[4];

    for (int i = 0; i < 4; i++) {
        printf("Digite o título do livro %d: ", i + 1);
        fgets(livros[i].titulo, 100, stdin);
        livros[i].titulo[strcspn(livros[i].titulo, "\n")] = '\0';

        printf("Digite o autor do livro %d: ", i + 1);
        fgets(livros[i].autor, 100, stdin);
        livros[i].autor[strcspn(livros[i].autor, "\n")] = '\0';

        printf("Digite o ano de publicação do livro %d: ", i + 1);
        scanf("%d", &livros[i].ano);
        getchar(); 
    }

    Livro recente = livroMaisRecente(livros, 4);
    printf("O livro mais recente é:\n");
    printf("Título: %s\n", recente.titulo);
    printf("Autor: %s\n", recente.autor);
    printf("Ano de publicação: %d\n", recente.ano);

    return 0;
}
