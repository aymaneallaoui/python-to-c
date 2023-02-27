## minx() max() Functions

#### `int maxi(int *high_number, int size)`

This function takes an array of integers `high_number` and its size `size` as input parameters. It returns the maximum value of the elements in the array.

#### `int minx(int *smallest_num, int size)`

This function takes an array of integers `smallest_num` and its size `size` as input parameters. It returns the minimum value of the elements in the array.

### Usage

To use these functions, include the appropriate function definition in your code, and call the function with the appropriate arguments. For example:

```c
int array[] = { 1, 2, 3, 4, 5 };
int max_val = maxi(array, 5);
int min_val = minx(array, 5);
```
This would set max_val to 5 and min_val to 1.

## Rangex Function 

This C function provides similar functionality to the `range()` built-in function in Python. Given a starting value, an ending value (exclusive), 
and a step size, it generates an array of integers containing the values in the range.

### Function Signature
```int* range(int start, int stop, int step, int* length);```

#### Parameters

`start`: The starting value of the range.

`stop` : The ending value of the range (exclusive).

`step` : The step size between values in the range.

`length` : A pointer to an integer that will be set to the length of the resulting range.

#### Return Value
A pointer to an array of integers containing the values in the range.
### example
```c
int length;
int* r = range(0, 10, 2, &length);  // r = [0, 2, 4, 6, 8]
int i;
for (i = 0; i < length; i++) {
    printf("%d ", r[i]);
}
free(r);

```
Note that the implementation assumes that the input values are valid, so you may want to add additional error checking code to handle edge cases. Also, remember to free the memory allocated by the function using free() when you're done with it.

## Contributing
If you find any issues with these functions or would like to suggest improvements, please feel free to submit an issue or pull request.
