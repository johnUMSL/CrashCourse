#include <cstddef>
#include <cstdio>

int main() {
    // for loop example
    unsigned long max1 = 0;
    unsigned long values1[] = { 10, 50, 20, 40, 0 };

    for (size_t i=0; i<5; i++) {
        if (values1[i] > max1) {
            max1 = values1[i];
        }
    }
    printf("The maximum value is %lu.\n", max1);

    // range based for loop example
    unsigned long max2 = 0;
    unsigned values2[] = { 10, 50, 20, 40, 60 };

    for (unsigned long value : values2) {
        if (value > max2) {
            max2 = value;
        } 
    }
    printf("The maximum value is %lu.\n", max2);
}