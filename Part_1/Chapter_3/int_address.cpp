#include <cstdio>

int main() {
    int gettysburg{};
    int *gettysburg_address = &gettysburg;

    printf("gettysburg: %d\n", gettysburg);
    printf("&gettysburg: %p\n", gettysburg_address);

    printf("Value at gettysbnurg_address: %d\n", *gettysburg_address);
    printf("Gettysburg Address: %p\n", gettysburg_address);

    *gettysburg_address = 17325;

    printf("gettysburg: %d\n", gettysburg);
    printf("Value at gettysbnurg_address: %d\n", *gettysburg_address);
    printf("Gettysburg Address: %p\n", gettysburg_address);
}