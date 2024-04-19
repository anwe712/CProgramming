#include <stdio.h>

// Function to swap two integers using pointers
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x = 10, y = 20;
    printf("Before swap: x = %d, y = %d\n", x, y);  // Output: Before swap: x = 10, y = 20

    swap(&x, &y);  // Pass addresses of x and y
    printf("After swap: x = %d, y = %d\n", x, y);   // Output: After swap: x = 20, y = 10

    return 0;
}
