#include <stdio.h>
#include <stdlib.h>

/*
LISTAS SIMPLE Y DOBLEMENTE ENLAZADAS
Son una secuencia de nodos que contienen información 
y apuntan a otros nodos que también contienen información. 
El último nodo es nulo, para saber que ahí termina la lista.
Cada nodo tiene una parte de datos 
y otra con la dirección de memoria del siguiente nodo.
*/

// 1. Declarar un lista enlazada
// 1.1. Creamos una clase Nodo con sus dos partes: datos y puntero
struct Node {
    int data;
    struct Node * next;
};

// 1.2. Crear un nodo nulo
struct Node * head;

// 2. Insertar un nodo
void insert(int x) {
    // Crea un nodo tempo con un espacio en memoria del tamaño de un nodo Node
    struct Node * temp = (struct Node *)malloc(sizeof(struct Node));

    // Asigna valores al nodo temp
    temp -> data = x;    //(*temp).data = x;
    temp -> next = NULL;

    // Hacemos que la cabeza apunte al nodo temp
    head = temp;
};

// 3. Imprimir valores
void print() {
    // Crea un nodo temporal que se ubica en la cabeza
    struct Node * temp = head;

    printf("La lista es: ");

    // Recorre la lista mientras haya nodos después del actual, es decir, que el puntero del nodo actual no sea nulo.
    while(temp != NULL) {
        // Imprime el valor del nodo
        printf(" %d,", temp -> data);

        // El nodo temporal avanza hasta el siguiente nodo de la lista si lo hay; si no, acaba el bucle.
        temp = temp -> next;

        printf("\n");
    }
};

int main() {

    // Iniciamos una lista vacía
    head = NULL;

    printf("¿Cuántos números vas a añadir a tu lista?");

    /* 
    Creamos las variables: 
        - n para la longitud de la lista, 
        - i para iterar y 
        - x para el número que introduce el usuario y que añadiremos a la lista
    */
    int n, i, x;

    scanf("%d", &n);

    // Iteramos
    for(i = 0; i < n; i++) {
        printf("Escribe tu número: \n");
        scanf("%d", &x);
        insert(x);
        print();
    }

}