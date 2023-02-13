#include <stdio.h>
#include <stdlib.h>

/*
Each variable that we create in our program
is stored in memory (RAM).
We access that variable by its name,
but C need to access it physically...
Where is that variable stored?

Pointer is a type of data that stores a memory address.
We can: 
    - 1. access to that memory addresses
    - 2. create a variable that stores a memory position of another variable
    - 3. access the value of the memory address that the pointer is pointing (dereferencing)

In sumery:
    - &: memory position
    - *: emory position's value
*/

int main() {
    char title[] = "Wentworth";
    int num_seasons = 8;

    // 1. Access
    // In order to access physical address, we use %p (pointer) and &variable_name
    printf("%s is stored in %p\nand %d is stored in %p\n", title, &title, num_seasons, &num_seasons);

    // We can modify the value of a variable but it will still be stored in the same position.
    num_seasons = 9;
    printf("%s is stored in %p\nand %d is stored in %p\n", title, &title, num_seasons, &num_seasons);

    // 2. Create pointer variables
    int * pTitle = &title; // The value (*) of pTitle is equals to title's memory position (&)
    int * pNum_seasons = &num_seasons;

    printf("%d\n", pTitle);
    printf("%d\n", pNum_seasons);

    // These variables are also stored in two memory addresses
    printf("pTitle is stored in %p\n", &pTitle);

    // 3. Access the value of a memory position (dereferencing): pNum_seasons is the memory positions; *pNum_seasons is the value inside of it.
    printf("The value of %p is %d\n", pNum_seasons, *pNum_seasons);
    
}