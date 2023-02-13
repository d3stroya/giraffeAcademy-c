#include <stdio.h>
#include <stdlib.h>

// Creamos una estructura para los nodos
struct Node {
    int data;
    struct Node * next;
};

// Creamos un nodo cabeza que apunte a null
struct Node * head = NULL;

// Función insertar, que crea un nodo con un valor y un puntero a null. Cambia el valor del puntero head para que apunte al nuevo nodo
void insert(int num) {
    struct Node * node = (struct Node *)malloc(sizeof(struct Node));
    node -> data = num;
    node -> next = NULL;
    head = node;
}

void printList(struct Node * data) {
    if(head == NULL) {
        printf("List is empty");
    }

    struct Node *ptr = NULL;
    ptr = head;
    while(ptr != NULL) {
        printf("%d ", ptr -> data);
        ptr = ptr -> next;
    }
}

int main() {
    insert(3);
    insert(5);
    insert(100);
    insert(230);
    insert(36);
    printList();

}