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