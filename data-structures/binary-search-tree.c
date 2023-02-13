#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Creamos una estructura para los nodos
struct BstNode {
    int data;
    struct BstNode * left;
    struct BstNode * right;
};



// Función para crear un nuevo nodo
struct BstNode * createBstNode(int data) {
    // Creamos un puntero al espacio en memoria dinámica que va a alojar el nuevo nodo
    struct BstNode * newNode = (struct BstNode *)malloc(sizeof(struct BstNode));

    // Asignamos los valores
    newNode -> data = data;
    newNode -> left = newNode -> right = NULL;

    // Devolvemos el nuevo nodo
    return newNode;
}

struct BstNode * insertNode(struct BstNode * root, int data) {
    // Si el árbol está vacío, creamos el nodo
    if(root == NULL) {
        root = createBstNode(data);
    // Si es menor, lo insertamos como hijo a la izquierda
    } else if(root -> data >= data) {
        root -> left = insertNode(root -> left, data);
    // Si es mayor, lo insertamos como hijo a la derecha
    } else {
        root -> right = insertNode(root -> right, data);
    }
    return root;
}

bool search(struct BstNode * root, int data) {
    // Si el árbol está vacío, el valor buscado no existe, por lo que devolvemos false
    if(root == NULL) {
        printf("false\n");
        return false;
    // Si el dato buscado es igual al valor del nodo actual, devolvemos true
    } else if(root -> data == data) {
        printf("true\n");
        return true;
    // Si el dato buscado es menor que el valor del nodo actual, seguimos buscando por la izquierda
    } else if(data <= root -> data) {
        return search(root -> left, data);
    // Si el dato buscado es mayor que el valor del nodo actual, seguimos buscando por la derecha
    } else {
        return search(root -> right, data);
    }
}

// Recorrer el árbol
void inorder(struct BstNode * root) {
    if(root == NULL) {
        return;
    } 
    inorder(root -> left);
    printf("%d\n", root -> data);
    inorder(root -> right);
}

void preorder(struct BstNode * root) {
    if(root == NULL) {
        return;
    }

    printf("%d\n", root -> data);
    preorder(root -> left);
    preorder(root -> right);
}

void postorder(struct BstNode * root) {
    if(root == NULL) {
        return;
    }

    postorder(root -> left);
    postorder(root -> right);
    printf("%d\n", root -> data);
}


int main() {
    // Creamos un árbol vacío
    struct BstNode * root = NULL;
    root = insertNode(root, 20);
    root = insertNode(root, 23);
    root = insertNode(root, 10);
    //printf("Root: %d\n", root -> data);
    //printf("Root's left pointer: %p\n", root -> left);
    //printf("Root's right pointer: %p\n", root -> right);
    printf("Is 10 in the tree? ");
    search(root, 10);

    printf("Is 12 in the tree? ");
    search(root, 12);

    printf("In order:\n");
    inorder(root);

    printf("Pre order:\n");
    preorder(root);

    printf("Post order:\n");
    postorder(root);
}

