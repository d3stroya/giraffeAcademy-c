#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    /*
    We can work with numbers in C both directly and with variables.
    Here we define 2 variables:
        - one is the price of a product
        - and the other one is the tax, wich is 21% of the price.
    Then we add them and show on terminal.
    */
    float price = 4.23;
    float tax = price / 1.21;

    printf("The price is %f$", price + tax);

    /*
    IMPORTANT: If we are working with integers, the result will be an integer and never a float or double.
    But a decimal number can be treated as an integer. So if we calculate 5/4 and show the result as an integer,
    we will have 1. If we show it as a decimal, we will have 1.25000000.
    */
    printf("\n\nTASK - Calculate 5/4");
    printf("\nAs integer: %d", 5 / 4);
    printf("\nAs float: %f", 5.0 / 4.0);

    /* 
    Now we're gonna use some functions as:
        - pow(a, b): a ^ b
        - sqrt(a): square root of a
        - ceil(a.bcd): round the number up
        - floor(a.bcd): round the number down
    */
    printf("FUNCTIONS: ")
    printf("\npow(2,3): %f", pow(2, 3));
    printf("\nsqrt(16): %f", sqrt(16));
    printf("\nceil(8.3294): %f", ceil(8.3294));
    printf("\nfloor(8.3294): %f", floor(8.3294));
}