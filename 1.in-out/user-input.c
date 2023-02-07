#include <stdio.h>
#include <stdlib.h>

int main() {

    /* USER INPUT 
        - scanf(data_type, variable)
        - fgets(variable, length, source)
       OUTPUT
        - printf()
    */

    // 1. First we need to create a variable to store the user input
    //int age;

    // 2. Now we have to show a prompt telling the user what data he/she needs to write
    //printf("Enter your age: ");

    // 3. Finallly, we need to scan user input with scanf("data_type", &variable)
    //scanf("%d", &age);

    // Let's print some text with the result
    //printf("Your age is %d\n", age);

    // The same for floating numbers and characters
    /*
    double tall;
    printf("How tall are you?");
    scanf("%lf", &tall);
    printf("\nYou are %f tall ", tall);

    char block;
    printf("\nAnd in wich block do you live?");
    scanf("%c", &block);
    printf("\nYou live in %c block.", block);
*/
    /*
    Working with strings is someway different.
    First, we create the variable as a string and indicate how many characters
    that variable is gonna be able to store. This is because we don't know the exact number
    of characters the user will write, so we need to tell C the max length of this variable.
    Then, it works the same: printf and scanf (without ampersand).
    
    char name[20];
    printf("What's your name?\n");
    scanf("%s", name);
    printf("Hi, %s!\n", name);
*/
    /*
    scan() got a problem: it only scan the first word, it stops scanning when user write a space.
    So C has another function, fgets(variable, length, source), that scan a whole line of characters.
    */
    char title[30];
    printf("What your favorite film and director?");
    fgets(title, 30, stdin);
    printf("Yeah! It is a great movie %s", title);
    return 0;
    
}

