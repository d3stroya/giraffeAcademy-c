#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
Structs are data structures that allow us to store data
with differente data types. It is like a class in other languages
so we can create objects.
*/

// 1. Create the struct
struct Car {
    int year;
    char color[10];
    double weight;
    char name[50];
};

int main() {
    // 2. Instanciate (create an object)
    struct Car car1;

    // 3. Add some data
    car1.year = 2012;
    car1.weight = 849;
    // car.color = "Red"; --> Error. Use strcpy(objetct.attribute, value) funciton
    strcpy(car1.color, "Red");
    strcpy(car1.name, "Polo");
    printf("My car is a %s %s from %d.\n", car1.color, car1.name, car1.year);

    // Do you want to create more cars?
    struct Car car2;
    car2.year = 2019;
    car2.weight = 1203;
    strcpy(car2.color, "White");
    strcpy(car2.name, "Megane");
    printf("Your car is a %s %s from %d.\n", car2.color, car2.name, car2.year);

}