#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node *next;
} Node;

int contarElementos(Node *head) {
    int count = 0;
    Node *current = head;
    while (current != NULL) {
        count++;
        current = current->next;
    }
    return count;
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

    printf("A lista possui %d elementos.\n", contarElementos(head));

    return 0;
}
