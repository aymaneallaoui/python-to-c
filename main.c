#include "library.h"
#include <stdio.h>
#include <stdlib.h>

void printabb(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{
    // rangex text ////////////////////////////////////////////////////
    int lengthw;
    int *r = rangex(0, 10, 1, &lengthw); // r = [0, 2, 4, 6, 8]
    int i;
    for (i = 0; i < lengthw; i++)
    {
        printf("The range is : %d\n ", r[i]);
    }
    free(r);

    // minx() maxi() test ////////////////////////////////////////////////////
    int nums[] = {3, 7, 2, 8, 1, 5, 4, 9, 6};
    int size = sizeof(nums) / sizeof(int);

    int max = maxi(nums, size);
    int min = minx(nums, size);

    printf("The maximum value in the array is: %d\n", max);
    printf("The minimum value in the array is: %d\n", min);

    char str[] = "Hello, world!";
    int length = lenx(str);
    printf("Length of '%s' is %d\n", str, length);

    int arr[] = {1, 2, 3, 4, 5};

    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: \n");
    printabb(arr, n);

    printf("Shuffled array: \n");
    shufflex(arr, n);
    printabb(arr, n);

    char str[] = "hello world";
    titlex(str);
    printf("%s\n", str);

    return 0;
}
