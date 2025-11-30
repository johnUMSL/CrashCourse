#include <cstdio>

int abs_value(int x) {
    if (x < 0) {
        x = x * -1;
    };
    return x;
}

int main() {
    int my_num = -10;
    printf("The absolute value of %d is %d.\n",
    my_num, abs_value(my_num));
}