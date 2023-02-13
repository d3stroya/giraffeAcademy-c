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

struct BstNode * findMin(struct BstNode * root) {
    while(root -> left != NULL) {
        root = root -> left;
    }
    printf("%d\n", root -> data);
    return root;
}

struct BstNode * findMax(struct BstNode * root) {
    while(root -> right != NULL) {
        root = root -> right;
    }
    printf("%d\n", root -> data);
    return root;
}

struct BstNode * delete(struct BstNode * root, int data) {
    // Si el árbol está vacío, devuelve el árbol
    if(root == NULL) {
        return root;
    // Si el valor buscado es menor que el valor del nodo actual, busca por la izquierda
    } else if(data < root -> data) {
        root -> left = delete(root -> left, data);
    // Si el valor buscado es mayor que el valor del nodo actual, busca por la derecha
    } else if(data > root -> data) {
        root -> right = delete(root, data);
    // Hemos encontrado el nodo
    } else {
        // Si no tiene hijos, eliminamos el nodo y dejamos el árbol vacío
        if(root -> left == NULL && root -> right == NULL) {
            free(root);
            root = NULL;
        // Si tiene 1 hijo, creamos un nodo temporal que apunte a la raíz e intercambiamos la raíz por su hijo
        } else if(root -> left == NULL) {
            struct BstNode * tmp = root;
            root = root -> right;
            free(tmp);
        } else if(root -> right == NULL) {
            struct BstNode * tmp = root;
            root = root -> left;
            free(tmp);
        // Si tiene dos hijos, encontramos el nodo con valor máximo de la rama izquierda o el mínimo de la rama derecha, que pasará a ser la raíz
        } else {
            // Creamos un puntero temporal al mínimo de la rama derecha
            struct BstNode * tmp = findMin(root -> right);
            // le asignamos a la razz el valor del nodo encontrado
            root -> data = tmp -> data;
            // En la rama izquierda, aplicamos esta misma función de eliminar recursivamente: busca el valor y actúa según el número de hijos que tenga.
            root -> right = delete(root -> right, tmp -> data);
        }
    }
    return root;
}

int main() {
    // Creamos un árbol vacío
    struct BstNode * root = NULL;
    root = insertNode(root, 20);
    root = insertNode(root, 23);
    root = insertNode(root, 10);
    root = insertNode(root, 1);
    root = insertNode(root, 12);
    root = insertNode(root, 49);
    root = insertNode(root, 74);
    root = insertNode(root, 3);
    root = insertNode(root, 81);


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

    printf("Searching for minimun value...");
    findMin(root);

    printf("Searching for maximum value...");
    findMax(root);

    delete(root, 81);

}

