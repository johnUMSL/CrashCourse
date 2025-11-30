#include <cstdio>

int main() {
    unsigned short a = 0b10101010;
    int b = 0123;
    unsigned long long d = 0xFFFFFFFFFFFFFFFF;
    unsigned int c = 3669732608;
    unsigned int f = 69;

    printf("%hu\n", a);
    printf("%d\n", b);
    printf("%llu\n", d);
    printf("Yabba %x!\n", c);
    printf("There are %u,%o leaves here.\n", f, f);
}