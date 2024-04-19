#include <stdio.h>

// Define the structure
struct Person {
    char name[50];
    int age;
    float height;
};

int main() {
    // Declare variables of the structure type
    struct Person person1, person2;

    // Assign values to the members of the first person
    printf("Enter name, age, and height for person 1:\n");
    scanf("%s %d %f", person1.name, &person1.age, &person1.height);

    // Assign values to the members of the second person
    printf("Enter name, age, and height for person 2:\n");
    scanf("%s %d %f", person2.name, &person2.age, &person2.height);

    // Display the details of both persons
    printf("\nDetails of person 1:\n");
    printf("Name: %s\n", person1.name);
    printf("Age: %d\n", person1.age);
    printf("Height: %.2f\n", person1.height);

    printf("\nDetails of person 2:\n");
    printf("Name: %s\n", person2.name);
    printf("Age: %d\n", person2.age);
    printf("Height: %.2f\n", person2.height);

    return 0;
}
