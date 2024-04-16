#include <stdio.h>

int sum(int a, int b) {
    int add = 0;
    add = a + b;
    return add;
}

int main() {
    int result = sum(67, 89);
    printf("The sum is %d\n", result);
    return 0;
}
