#include "library.h"
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int lengthw;
    int *r = rangex(0, 10, 2, &lengthw); // r = [0, 2, 4, 6, 8]
    int i;
    for (i = 0; i < lengthw; i++)
    {
        printf("The range is : %d\n ", r[i]);
    }
    free(r);

    int nums[] = {3, 7, 2, 8, 1, 5, 4, 9, 6};
    int size = sizeof(nums) / sizeof(int);

    int max = maxi(nums, size);
    int min = minx(nums, size);

    printf("The maximum value in the array is: %d\n", max);
    printf("The minimum value in the array is: %d\n", min);

    return 0;
    char str[] = "Hello, world!";
    int length = len(str);
    printf("Length of '%s' is %d\n", str, length);
    return 0;
}

// int testmap()
// {

//     int numbers[] = {1, 2, 3};

//     int size = sizeof(numbers) / sizeof(numbers[0]);

//     int *squares = map(square, numbers, size);
//     for (int i = 0; i < size; i++)
//     {
//         printf("%d ", squares[i]);
//     }
//     printf("\n");
// }


