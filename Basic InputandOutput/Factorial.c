#include <stdio.h>

int factorial(int num) {
    if (num == 0 || num == 1) {
        return 1;
    }

    int fact = 1;
    for (int i = 2; i <= num; i++) 
    {
        fact *= i;
    }
    return fact;
}

//main method to print the factorial of the number
int main() {
    int number = 5;
    printf("Factorial = %d\n", factorial(number));

    return 0;
}
