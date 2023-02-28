#include "library.h"
#include <stdio.h>
#include <stdlib.h>


int main() {
    int length;
    int* r = rangex(0, 10, 2, &length);  // r = [0, 2, 4, 6, 8]
    int i;
    for (i = 0; i < length; i++) {
        printf("%d ", r[i]);
    }
    free(r);

    int nums[] = {3, 7, 2, 8, 1, 5, 4, 9, 6};
    int size = sizeof(nums) / sizeof(int);

    int max = maxi(nums, size);
    int min = minx(nums, size);

    printf("The maximum value in the array is: %d\n", max);
    printf("The minimum value in the array is: %d\n", min);

    return 0;
}


