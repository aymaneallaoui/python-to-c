#include "library.h"
#include <stdio.h>
#include <stdlib.h>


int main() {
    int length;
    int* r = rangex(0, 10, 2, &length);  // r = [0, 2, 4, 6, 8]
    int i;
    for (i = 0; i < length; i++) {
        printf("%d ", r[i]);
    }
    free(r);

    return 0;
}
