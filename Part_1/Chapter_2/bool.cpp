#include <cstdio>

int main() {
    bool b1 = true;
    bool b2 = false;

    bool t = true;
    bool f = false;

    printf("%d %d\n", b1, b2);

    printf("7 == 7: %d\n", 7 == 7);
    printf("7 != 7: %d\n", 7 != 7);
    printf("10 > 20: %d\n", 10 > 20);
    printf("10 >= 20: %d\n", 10 >= 20);
    printf("10 < 20: %d\n", 10 < 20);
    printf("20 <= 20: %d\n", 20 <= 20);

    printf("!true: %d\n", !t);
    printf("true && false: %d\n", t && f);
    printf("true && !false: %d\n", t && !f);
    printf("true || false: %d\n", t || f);
    printf("false || false: %d\n", f || f);
}
