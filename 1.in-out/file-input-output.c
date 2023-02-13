#include <stdio.h>
#include <stdlib.h>

int main() {
    // Let's create a file
    /*
    1. Create a pointer to the file --> FILE * fptr
    2. Open the file, indicating name and mode --> fopen()
    3. Write the text, indicating pointer and text --> fprintf()
    4. Close the file --> fclose()
    */
    FILE * fptr;
    fptr = fopen("hello_friend1.txt", "w");
    fprintf(fptr, "Hello friend? That’s lame.\nMaybe I should give you a name? But that’s a slippery slope. \nYou’re only in my head. We have to remember that.");
    fclose(fptr);

    // Now we'll try to read it
    /*
    1. Create the pointer
    2. Open the file with r mode
    3. Create an array to store the data
    4. Traverse the file with a while loop
    5. Put the text on screen
    6. Close the file
    */

    FILE * fptr2;
    fptr2 = fopen("hello_friend.txt", "r");
    char line[150];

    while(feof(fptr2)) {
        fgets(line, 150, fptr2);
        puts(line);
    }

    fclose(fptr2);
    return 0;
}