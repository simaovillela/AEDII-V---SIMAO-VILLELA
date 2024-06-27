#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node *next;
} Node;

Node* inserirNoFinal(Node *head, int valor) {
    Node *novoNode = (Node *)malloc(sizeof(Node));
    novoNode->data = valor;
    novoNode->next = NULL;

    if (head == NULL) {
        return novoNode;
    }

    Node *temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = novoNode;

    return head;
}

void imprimirLista(Node *head) {
    Node *temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main() {
    Node *head = NULL;
    int valor;

    for (int i = 0; i < 5; i++) {
        printf("Digite um valor para inserir na lista: ");
        scanf("%d", &valor);
        head = inserirNoFinal(head, valor);
    }

    printf("Lista encadeada: ");
    imprimirLista(head);

    return 0;
}
