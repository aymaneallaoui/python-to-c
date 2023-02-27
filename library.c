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

