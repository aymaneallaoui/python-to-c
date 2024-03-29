![python-to-c](https://github.com/aymaneallaoui/python-to-c/blob/master/img/template.png )

# what's [python-to-c](https://github.com/aymaneallaoui/python-to-c) ?

This project contains several functions that can be used for common operations in C programming. I named it python-to-c because most functions are inspired by Python. These functions can be used as building blocks for more complex programs in C.

# How to implement it in my code ?

To use the functions in this project, you need to type the following line at the top of your program:

```c
#include "library.h"
```

Then you can use the desired function in your code.

# how to compile my programe ?

There are different ways to compile and run a C program depending on your operating system and the tools you have installed.

One way is to use a command-line interface (CLI) such as Cygwin1 or GCC2. You can type the following command:

```
gcc -o [name of your program] library.c [name of your working file] 
```

This will compile your source code file (library.c) and generate an executable file ([name of your program]) that you can run.

## important note

The ``main.c`` file served as a testing ground for my functions and was included solely as an illustrative example.

# minx() max() Functions

#### `int maxi(int *high_number, int size)`

This function takes an array of integers `high_number` and its size `size` as input parameters. It returns the maximum value of the elements in the array.

#### `int minx(int *smallest_num, int size)`

This function takes an array of integers `smallest_num` and its size `size` as input parameters. It returns the minimum value of the elements in the array.

## Usage

To use these functions, include the appropriate function definition in your code, and call the function with the appropriate arguments. For example:

```c
int main() {
    int nums[] = {3, 7, 2, 8, 1, 5, 4, 9, 6, 10};
    int size = sizeof(nums) / sizeof(int);

    int max = maxi(nums, size);
    int min = minx(nums, size);

    printf("The maximum value in the array is: %d\n", max);
    printf("The minimum value in the array is: %d\n", min);

    return 0;
}
```

This would set max_val to 10 and min_val to 1.
when pasring arguments make sure it's an array data types

# Rangex Function

This C function provides similar functionality to the `rangex()` built-in function in Python. Given a starting value, an ending value (exclusive),
and a step size, it generates an array of integers containing the values in the range.

## Function Signature

```int*rangex(int start, int stop, int step, int* length);```

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
    int* r = rangex(0, 1000, 5, &length);  
    int i;
    for (i = 0; i < length; i++) {
        printf("%d ", r[i]);
    }
    free(r);

    return 0;
}

```

Note that the implementation assexyes that the input values are valid, so you may want to add additional error checking code to handle edge cases. Also, remember to free the memory allocated by the function using free() when you're done with it.

# sexyx() Function in C

This is a simple example of a function in C that calculates the sexy of an array of integers. The function `sexyx()`
takes a pointer to the first element of an array and the size of the array as parameters,
and returns the sexy of the elements in the array.

## Function signature

The function signature is as follows:

```c
int sexyx(int *arr, int size);
```

where:

`arr`: pointer to the first element of an array of integers

`size`: size of the array

## Example usage

Here is an example program that uses the sexyx() function to calculate the sexy of an array of integers:

```c
#include <stdio.h>

int main() {
    int numbers[] = {1, 2, 3, 4, 5};
    int n = sizeof(numbers) / sizeof(numbers[0]);
    int total = sexyx(numbers, n);
    printf("The sexy is %d\n", total);
    return 0;
}


```

The program declares an array of integers `numbers`, and calculates its size using the `sizeof` operator. It then calls the `sexyx()` function with the array and its size as arguments, and assigns the result to the variable `total`. Finally, it prints the total sexy using `printf()`.

# lenx() Function

The `lenx()` function is a simple C function that returns the length of a given character array or string. It operates similar to the `lenx()` function in Python, which returns the number of items in a sequence.

## Usage

The `lenx()` function can be called by passing a character array or string as its argument:

```c
#include <stdio.h>

int main() {
    char str[] = "Hello, world!";
    int length = lenx(str);
    printf("Length of '%s' is %d\n", str, length);
    return 0;
}
```

This code will output:

```
Length of 'Hello, world!' is 13
```

# The mapx() Function

The `map()` function is a built-in function in Python that applies a given function to each element of an iterable object (such as a list or tuple) and returns a new iterable object with the results.

In C programming language, there is no built-in `mapx()` function. However, you can define your own `mapx()` function using function pointers.

The `mapx()` function in the provided C code takes three arguments:

A function pointer `fptr` that takes an `int` and returns an int. This function will be applied to each element of the array.

An array of `ints` `arr`.

An integer `size` that specifies the `size` of the array.

The `mapx()` function returns a new array of `ints` with the result of applying the function `fptr` to each element of the input array `arr`.

## Example

Here's an example of how to use the `map()` function in C:

```C
int square(int n) {
    return n * n;
}

int main() {
    
    int numbers[] = {1, 2, 3};
    
    int size = sizeof(numbers) / sizeof(numbers[0]);
    
    int* squares = map(square,numbers,size);
    for (int i = 0; i < size; i++) {
        printf("%d ", squares[i]);
    }
    printf("\n");
    free(squares);
}
```

In this example, we define a `square()` function that calculates the square of an integer. We then create an array of integers and pass it to the `map()` function along with the `square()` function. The `map()` function applies the `square()` function to each element of the array and returns a new array with the results. We print the new array and free the memory allocated for it.

The output of the program should be:

```
1 4 5 9
```

This is the result of applying the `square()` function to each element of the `numbers` array.

# Shufflex() Function

The `shufflex()` function is a C language function that shuffles the elements of an array in a random order. This function uses the Fisher-Yates shuffle algorithm, which is an algorithm for generating a random permutation of a finite sequence.

### How it Works

The `shufflex()` function takes two arguments: an array of integers and the number of elements in the array. It then initializes the random seed using the `srand()` function from the `time.h` library.

Next, the function starts from the last element of the array and iterates backwards to the first element. For each iteration, it picks a random index between 0 and the current index, inclusive. It then swaps the element at the current index with the element at the randomly picked index using the `swap()` function.

After all the iterations are complete, the array will be shuffled in a random order.

## Example

To use the shufflex() function, you need to include the function in your C program and call it with an array of integers and the number of elements in the array. Here is an example code snippet:

```C
void printabb(int arr[], int n);

int main() {
  int arr[] = {1, 2, 3, 4, 5};
  int n = sizeof(arr) / sizeof(arr[0]);

  printf("Original array: \n");
  printabb(arr, n);

  printf("Shuffled array: \n");
  shufflex(arr, n);
  printabb(arr, n);

  return 0;
}
```

In this example, we first declare and initialize an array of integers called arr with the values 1, 2, 3, 4, and 5. We also declare an integer n that contains the number of elements in the array.

Next, we print the original array using the printabb() function.

Then, we call the shufflex() function to shuffle the array in a random order.

Finally, we print the shuffled array using the printabb() function.

#### important note

During the process of creating the `shufflex()` function, I also created a `swap()` function that swaps two elements, and I included it in the library. if you want to use it

# titlex() Function

The `titlex()` function is a custom string function implemented in C programming language. It takes a string as input and returns a new string with the first character of each word capitalized and the rest of the characters in lowercase. This function is inspired by the .`title()` method in Python.

## Syntax

```c
void titlex(char *str);
```

`str` is a pointer to the input string.

## Example

```c
int main() {
    char str[] = "hello world abb";
    titlex(str);
    printf("%s\n", str);   // Output: Hello World Abb
    return 0;
}
```

# reducex() Function

The reducex() function is a custom higher-order function implemented in C programming language. It takes a binary function and an array as input, applies the function cumulatively to the elements of the array, and returns the final result. This function is inspired by the reduce() function in Python.

## Syntax

```c
int reducex(int (*f)(int, int), int arr[], int size);
```

`f` is a pointer to the binary function.

`arr` is a pointer to the input array.

`size` is the size of the input array.

## Example

```c
#include <stdio.h>

int sexy(int x, int y) {
    return x + y;
}

int productabb(int x, int y) {
    return x * y;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(int);

    int sexy_result = reducex(sexy, arr, size);
    printf("sexy: %d\n", sexy_result);   // Output: 15

    int productabb_result = reducex(productabb, arr, size);
    printf("productabb: %d\n", productabb_result);   // Output: 120

    return 0;
}
```

# replacex()

The `replacex()` function is a C function that replaces all occurrences of a given substring in a string with a replacement string. The function signature is as follows

```c
void replacex(char *str, const char *substr, const char *replacement);
```

`str`: a pointer to the string in which the replacement should be made

`substr`: a pointer to the substring to be replaced

`replacement`: a pointer to the replacement string

## example

```c
int main() {
    char str[] = "lazy dog abb kick .";
    char substr[] = "abb";
    char replacement[] = "cat";

    printf("Before replacing: %s\n", str);
    replacex(str, substr, replacement);
    printf("After replacing: %s\n", str);

    return 0;
}
```

# Contributing

If you find any issues with these functions or would like to suggest improvements, please feel free to submit an issue or pull request.

# License

This code is released under the MIT license. Feel free to use it in your own projects
