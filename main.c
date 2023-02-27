#include "library.h"
#include <stdio.h>


int main() {
    int students_scores[] = {78, 95, 65, 98, 75, 36};
    int size = sizeof(students_scores) / sizeof(int);
    int max_score = maxi(students_scores, size);
    printf("The maximum score is %d\n", max_score);
    return 0;
}
