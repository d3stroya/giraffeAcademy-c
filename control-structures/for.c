#include <stdio.h>
#include <stdlib.h>

/*
For is a loop that iterates in some kind of list or similar.
It uses an index (usually i) that increses or decreases its value with each itaration.
*/

int main() {
    int i;

    printf("This is a for loop:\n");
    for(i = 0; i <= 5; i++) {
        printf("%d\n", i);
    }

    printf("Let's traverse an array:\n");
    int nums[] = {1, 2, 3};
    for(int i = 0; i < 3; i++) {
        printf("%d\n", nums[i]);
    }
}

