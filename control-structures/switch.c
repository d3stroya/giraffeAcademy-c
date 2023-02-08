#include <stdio.h>
#include <stdlib.h>

/*
Switch statment allow as to set a bunch of conditions with
one variable, in order to avoid a lof of if-else if statements,
wich is a bad practise.
*/
int main() {
    // 1. Declare a variable
    int level;

    printf("Please, select a number between 1 and 5:\n");
    scanf("%d", &level);

    // 2. Set switch with its variable
    switch(level) {
    // 3. Enumerate the cases
    case 1 :
        // 3.1. Actions to execute
        printf("Level 1\n");
        // 3.2. Break the cicle
        break;
    case 2 :
        printf("Level 2\n");
        break;
    case 3 :
        printf("Level 3\n");
        break;
    case 4 : 
        printf("Level 4\n");
        break;
    case 5 :
        printf("Level 5\n");
        break;
    // 4. Set a default response. It acts like else in if statements.
    default :
        printf("Invalid level. Please, select a number between 1 and 5.\n");
    }

    return 0;

}