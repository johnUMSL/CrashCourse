#include <cstdio>

int main() {
    int arr[] = { 1, 2, 3, 4 };
    printf("The third element is %d.\n", arr[2]);

    arr[2] = 100;
    printf("The third element is %d.\n", arr[2]);

    short array[] = { 104, 105, 32, 98, 105, 108, 108, 0 };
    size_t n_elements = sizeof(array) / sizeof(short);

    printf("The length of the array is %zu elements.\n", n_elements);
}