# minx() max() Functions

#### `int maxi(int *high_number, int size)`

This function takes an array of integers `high_number` and its size `size` as input parameters. It returns the maximum value of the elements in the array.

#### `int minx(int *smallest_num, int size)`

This function takes an array of integers `smallest_num` and its size `size` as input parameters. It returns the minimum value of the elements in the array.

## Usage

To use these functions, include the appropriate function definition in your code, and call the function with the appropriate arguments. For example:

```c
int main() {
    int nums[] = {3, 7, 2, 8, 1, 5, 4, 9, 6};
    int size = sizeof(nums) / sizeof(int);

    int max = maxi(nums, size);
    int min = minx(nums, size);

    printf("The maximum value in the array is: %d\n", max);
    printf("The minimum value in the array is: %d\n", min);

    return 0;
}
```
This would set max_val to 9 and min_val to 1.

# Rangex Function 

This C function provides similar functionality to the `range()` built-in function in Python. Given a starting value, an ending value (exclusive), 
and a step size, it generates an array of integers containing the values in the range.

## Function Signature
```int* range(int start, int stop, int step, int* length);```

#### Parameters

`start`: The starting value of the range.

`stop` : The ending value of the range (exclusive).

`step` : The step size between values in the range.

`length` : A pointer to an integer that will be set to the length of the resulting range.

#### Return Value
A pointer to an array of integers containing the values in the range.
## example
```c
int main() {
    int length;
    int* r = range(0, 1000, 5, &length);  // r = [0, 2, 4, 6, 8]
    int i;
    for (i = 0; i < length; i++) {
        printf("%d ", r[i]);
    }
    free(r);

    return 0;
}

```
Note that the implementation assumes that the input values are valid, so you may want to add additional error checking code to handle edge cases. Also, remember to free the memory allocated by the function using free() when you're done with it.

# Sumx() Function in C

This is a simple example of a function in C that calculates the sum of an array of integers. The function `sum()`
takes a pointer to the first element of an array and the size of the array as parameters, 
and returns the sum of the elements in the array.

## Function signature

The function signature is as follows:

```c
int sum(int *arr, int size);
```

where:

`arr`: pointer to the first element of an array of integers

`size`: size of the array
## Example usage
Here is an example program that uses the sum() function to calculate the sum of an array of integers:

```c
#include <stdio.h>

int sum(int *arr, int size);

int main() {
    int numbers[] = {1, 2, 3, 4, 5};
    int n = sizeof(numbers) / sizeof(numbers[0]);
    int total = sum(numbers, n);
    printf("The sum is %d\n", total);
    return 0;
}

int sum(int *arr, int size) {
    int total = 0;
    for (int i = 0; i < size; i++) {
        total += *(arr + i);
    }
    return total;
}

```

The program declares an array of integers `numbers`, and calculates its size using the `sizeof` operator. It then calls the `sum()` function with the array and its size as arguments, and assigns the result to the variable `total`. Finally, it prints the total sum using `printf()`.


# lenx() Function

The `len()` function is a simple C function that returns the length of a given character array or string. It operates similar to the `len()` function in Python, which returns the number of items in a sequence.

## Usage

The `len()` function can be called by passing a character array or string as its argument:

```c
#include <stdio.h>

int len(char *arr) {
    int length = 0;
    while (*arr != '\0') {
        length++;
        arr++;
    }
    return length;
}

int main() {
    char str[] = "Hello, world!";
    int length = len(str);
    printf("Length of '%s' is %d\n", str, length);
    return 0;
}
```
This code will output:

```
Length of 'Hello, world!' is 13
```



## Contributing
If you find any issues with these functions or would like to suggest improvements, please feel free to submit an issue or pull request.
