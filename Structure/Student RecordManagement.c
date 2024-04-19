//A program to store and display details of students using structures.
#include <stdio.h>

struct Student
{
    /* data */
    int age ;
    char name[25] ;
};

int main()
{
 struct Student s1 = { 13 , "Anushka"} ;
 struct Student s2 = {20 , "Ayushman" } ;
 struct Student s3 = {30 , "Amit" } ;
  printf("The name of the student1 is %s\n" , s1.name) ;
 printf("The age of the student1 is  %d\n" , s1.age) ;

  printf("The name of the student2 is %s\n" , s2.name) ;
 printf("The age of the student2 is  %d\n" , s2.age) ;

 printf("The name of the student3 is %s\n" , s3.name) ;
 printf("The age of the student3 is  %d\n" , s3.age) ;
 return 0 ;
}
