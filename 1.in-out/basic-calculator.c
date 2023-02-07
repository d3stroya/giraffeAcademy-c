#include <stdio.h>
#include <stdlib.h>

int main() {
    double a;
    double b;

    printf("Hi, this is a basic calculator that adds A to B.\n");
    
    printf("Write your number A: ");
    scanf("%lf", &a);

    printf("Good! Now write your B number: ");
    scanf("%lf", &b);

    printf("Cool! A + B is %f\n", a + b);

}