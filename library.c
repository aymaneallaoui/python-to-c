#include <stdlib.h>
#include <time.h>
#include <ctype.h>

int maxi(int *high_number, int size)
{
    int high = 0;
    for (int i = 0; i < size; i++)
    {
        int n = high_number[i];
        if (n > high)
        {
            high = n;
        }
    }
    return high;
}

int minx(int *smallest_num, int size)
{
    int min_val = *smallest_num;
    for (int i = 1; i < size; i++)
    {
        if (*(smallest_num + i) < min_val)
        {
            min_val = *(smallest_num + i);
        }
    }
    return min_val;
}

int *rangex(int start, int stop, int step, int *length)
{

    *length = (stop - start) / step;
    if ((stop - start) % step != 0)
    {
        (*length)++;
    }

    int *result = (int *)malloc(*length * sizeof(int));

    int i;
    for (i = 0; i < *length; i++)
    {
        result[i] = start + i * step;
    }

    return result;
}

int sumx(int *arr, int size)
{
    int total = 0;
    for (int i = 0; i < size; i++)
    {
        total += *(arr + i);
    }
    return total;
}

typedef int (*func_ptr)(int);

int square(int n)
{
    return n * n;
}

// Define a function that mimics map() in Python
int *mapx(func_ptr fptr, int *arr, int size)
{

    int *result = malloc(size * sizeof(int));

    for (int i = 0; i < size; i++)
    {
        result[i] = fptr(arr[i]);
    }

    return result;
}

int lenx(char *arr)
{
    int length = 0;
    while (*arr != '\0')
    {
        length++;
        arr++;
    }
    return length;
}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void shufflex(int arr[], int n)
{

    srand(time(NULL));

    for (int i = n - 1; i > 0; i--)
    {

        int j = rand() % (i + 1);

        swap(&arr[i], &arr[j]);
    }
}

void titlex(char *str)
{
    int i;
    int capitalize_next = 1;

    for (i = 0; str[i] != '\0'; i++)
    {
        if (isspace(str[i]))
        {
            capitalize_next = 1;
        }
        else
        {
            if (capitalize_next)
            {
                str[i] = toupper(str[i]);
                capitalize_next = 0;
            }
            else
            {
                str[i] = tolower(str[i]);
            }
        }
    }
}