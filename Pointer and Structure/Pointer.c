#include <stdio.h>

int main() {
    int num = 10;//variable
    int *numptr = &num;  // Pointer to an integer

    int *pointer_variable_of_num = &num ;//assigns the address of variable to ptr.

    printf("Value of num: %d\n", num);      // Output: Value of num: 10
    printf("Value at memory location: %d\n", *pointer_variable_of_num);  // Output: Value at memory location: 10

    return 0;
}
