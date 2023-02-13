#include <stdio.h>
#include <stdlib.h>

int main() {
    // 1. ARRAYS: a collection of values
    // 1.1. Declare
    int nums[] = {3, 2, 7, 4, 12, 65, 94, 36};

    // 1.2. Declare an empty array
    int nums2[10];  
    
    // 1.3. Access
    printf("%d\n", nums[0]);

    // 1.4. Assign a new value
    nums[1] = 18;
    printf("%d\n", nums[1]);

    nums2[0] = 0;
    nums2[1] = 1;
    printf("\n%d", nums2[0]);
    printf("\n%d", nums2[1]);
    // Null value printf("\n%d", nums2[2]); 

    // 1.5. Search or traverse an array
    for(int i = 0; i < 8; i++) {
        int num = nums[i];
        printf("%d\n", num);

        if(num == 12) {
            printf("The number is 12\n");
        }

    }
    return 0;
}