#include <stdio.h>
#include <stdlib.h>

/*
A function is a bunch of lines of code encapsulated with a name,
so we can call them anywhere anytime in out program.
We need to specify:
    - Return type of data
    - Name
    - Parenthesis with or without (parameters)
    - Curly brackets
    - Lines of code
    - (Return)
*/
void sayHi(char name[], int num) {
    printf("Hi, %s, your number is %d\n", name, num);
}

int cube(int num) {
    int result = num * num * num;
    return result;
}

int main() {
    sayHi("Franky", 3280128);

    printf("Cube: %d\n", cube(3));

    return 0;
}


