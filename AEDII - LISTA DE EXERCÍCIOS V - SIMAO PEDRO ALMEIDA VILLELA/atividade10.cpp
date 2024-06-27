#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node *next;
} Node;

Node* removerPrimeiro(Node *head) {
    if (head == NULL) return NULL;

    Node *temp = head;
    head = head->next;
    free(temp);

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

int main() {
    Node *head = NULL;
    int valor;

    for (int i = 0; i < 5; i++) {
        printf("Digite um valor para inserir na lista: ");
        scanf("%d", &valor);
        head = inserirNoFinal(head, valor);
    }

    printf("Lista antes de remover o primeiro elemento: ");
    imprimirLista(head);

    head = removerPrimeiro(head);

    printf("Lista após remover o primeiro elemento: ");
    imprimirLista(head);

    return 0;
}
