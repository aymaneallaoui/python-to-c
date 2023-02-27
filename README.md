## minx() max() Functions

### `int maxi(int *high_number, int size)`

This function takes an array of integers `high_number` and its size `size` as input parameters. It returns the maximum value of the elements in the array.

### `int minx(int *smallest_num, int size)`

This function takes an array of integers `smallest_num` and its size `size` as input parameters. It returns the minimum value of the elements in the array.

## Usage

To use these functions, include the appropriate function definition in your code, and call the function with the appropriate arguments. For example:

```c
int array[] = { 1, 2, 3, 4, 5 };
int max_val = maxi(array, 5);
int min_val = minx(array, 5);
```
This would set max_val to 5 and min_val to 1.

## Contributing
If you find any issues with these functions or would like to suggest improvements, please feel free to submit an issue or pull request.