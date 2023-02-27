#include <stdlib.h>

int maxi(int *high_number, int size) {
    int high = 0;
    for (int i = 0; i < size; i++) {
        int n = high_number[i];
        if (n > high) {
            high = n;
        }
    }
    return high;
}

int minx(int *smallest_num, int size) {
    int min_val = *smallest_num;
    for (int i = 1; i < size; i++) {
        if (*(smallest_num + i) < min_val) {
            min_val = *(smallest_num + i);
        }
    }
    return min_val;
}



int* rangex(int start, int stop, int step, int* length) {
    // calculate the length of the resulting range
    *length = (stop - start) / step;
    if ((stop - start) % step != 0) {
        (*length)++;
    }

    // allocate memory for the range
    int* result = (int*) malloc(*length * sizeof(int));

    // fill the range with values
    int i, value = start;
    for (i = 0; i < *length; i++) {
        result[i] = value;
        value += step;
    }

    return result;
}
