#include <stdio.h>
#include <stdlib.h>

/*
While is a loop that repeat one o more actions while a condition is true.
It is very important to break the loop increasing or decreasing the value of condition.
If we don't do this, the while loops executes forever.
*/

int main() {
    int index = 0;
    
    // While loop checks the condition and then execute the actions
    printf("This is a while loop:\n");
    while(index <= 5) {
        printf("%d\n", index);
        //index = index + 1;
        index++;
    }

    // Do while loop first execute the actions and then checks the condition
    int index1 = 0;
    printf("This is a do while loop:\n");
    do {
        printf("%d\n", index1);
        index1++;
    } while(index1 <= 5);
}