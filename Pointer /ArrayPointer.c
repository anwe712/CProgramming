#include <stdio.h>

int main() {
    int arr[] = {10, 30,20 , 50, 40};
    int *ptr = arr;  // Pointer to the first element of the array

    printf("Value at ptr: %d\n", *ptr);   // Output: Value at ptr: 10
    ptr++;  // Move pointer to the next element
    printf("Value at ptr after increment: %d\n", *ptr);  // Output: Value at ptr after increment: 20

    return 0;
}
