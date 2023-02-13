#include <stdio.h>
#include <stdlib.h>

int main() {
    /* 
    VARIABLES 
    A variable is a space in memory that stores data. 
    Diferent data type needs different space, so we have to indicate
    the data type of each variable. 
    Then we give the variable a name so anyone reading the code can understand
    what that variable does.
    After that, an = and the value. Now that variable is storing the value we have witten.
    */
    char title[] = "Wentworth";
    const int year = 2013;
    int seasons = 8;
    int episodes = 100;
    double rate = 8.3;

    /* 
    Then we can use those variables in our code 
        - Integer --> %d
        - Float --> %f
        - Double --> %lf
        - String --> %s
        - Character --> %c
    */
    printf("%s is an australian TV show\n", title);
    printf("premiered in %d,\n", year);
    printf("with %d episodes in its %d seasons.\n", episodes, seasons);
    printf("Its rate on IMDB is %lf", rate);

    /*
    Variables store values that can be modified.
    But in some circumstances we may want constant values, 
    so we can create constants just writing const before the data type.

    A best practice is write constants in capital letters.

    Now our variable 'year' is a constant. If we try to change its value,
    the program will throw an error.
    But we can still change other variables as 'rate', for example.
    */
    /* year = 2014; */
    rate = 8.7;
    printf("\n\n%s is an australian TV show\n", title);
    printf("premiered in %d,\n", year);
    printf("with %d episodes in its %d seasons.\n", episodes, seasons);
    printf("Its rate on IMDB is %f", rate);
    return 0;
}