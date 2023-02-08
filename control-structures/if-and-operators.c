#include <stdio.h>
#include <stdlib.h>

/*
If statment allows us to set a condition and
some actions in case the condition is true
or some other actions in case the condition is false.
*/

int compare(int a, int b) {
    int result;

    // 1. Condition
    if(a > b) {
        // 2. If true
        result = a;
    } else {
        // 3. If false
        result = b;
    }
    // 4. Action after condition. No matter what, this is always executed.
    return result;
}

/* Let's complicate it a little bit: what if we want to compare 3 numbers?
We'll use the AND comparator (&&) in this case,
but we can also use the OR comparator (||).
Also, operators as:
    - Is equals to: ==
    - Is greater than: >
    - Is lower than: >
    - Is greater or equals to: >=
    - Is lower or equals to: <=
    - Is not equals to: !=
And negate the whole condition: if(!(3 == 2)) 
    --> If 3 is  equals to 2, the condition is TRUE
    --> But, as it is negated, th condition turns to FALSE
*/
int max(int a, int b, int c) {
    int result;

    if(a >= b && a >= c) {
        result = a;
    } else if(b >= a && b >= c) {
        result = b;
    } else {
        result = c;
    }

    return result;
}

/* But we can also use the OR comparator (||).
Also, operators as:
    - Is equals to: ==
    - Is greater than: >
    - Is lower than: >
    - Is greater or equals to: >=
    - Is lower or equals to: <=
    - Is not equals to: !=
And negate the whole condition: if(!(3 == 2)) 
    --> If 3 is  equals to 2, the condition is TRUE
    --> But, as it is negated, th condition turns to FALSE
*/

int main() {
    printf("Number %d is the greatest\n", compare(5, 18));

    printf("Number %d is the greatest of the three numbers.\n", max(5, 18, 23));

    if(3 > 4 && 3 < 6) {
        printf("True\n");
    } else {
        printf("False\n");
    }

    if(3 > 4 || 3 < 6) {
        printf("True\n");
    } else {
        printf("False\n");
    }
}