#include <stdio.h>

struct Employee {
    int empId;
    char name[50];
    float salary;
};

int main() {
    struct Employee emp1 = {1, "John", 50000.0};
    printf("Employee Details:\n");
    printf("ID: %d\n", emp1.empId);
    printf("Name: %s\n", emp1.name);
    printf("Salary: %.2f\n", emp1.salary);
    return 0;
}
