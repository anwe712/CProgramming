#include <stdio.h>

void max(int a, int b) {
    if (a > b) {
        printf("%d is maximum among two number\n", a);
    } else {
        printf("%d is maximum among the two numbers\n", b);
    }
}

int main() {
    max(89, 107);
    return 0;
}
