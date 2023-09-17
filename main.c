#include "main.h"

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90, 87, 100, 29, 192873};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: \n");
    debug_arr_int(arr, n);

    bubble_sort(arr, n);

    printf("\nSorted array: \n");
    debug_arr_int(arr, n);

    return 0;
}
