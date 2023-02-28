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

    *length = (stop - start) / step;
    if ((stop - start) % step != 0) {
        (*length)++;
    }


    int* result = (int*) malloc(*length * sizeof(int));


    int i;
    for (i = 0; i < *length; i++) {
        result[i] = start + i * step;
    }

    return result;
}

int sumx(int *arr, int size) {
    int total = 0;
    for (int i = 0; i < size; i++) {
        total += *(arr + i);
    }
    return total;
}
