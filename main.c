#include "main.h"


int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90, 87};

    printf("Original array: \n");
    debug_arr_int(arr);

    bubble_sort(arr);

    printf("\nSorted array: \n");
    debug_arr_int(arr);

    return 0;
}
