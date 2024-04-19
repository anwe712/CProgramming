#include <stdio.h>

struct Rectangle {
    int length ;
    int breadth ;
};

void calculateArea(struct Rectangle rect)
{
    int area = rect.length * rect.breadth ;
    printf("The area of the rectangle is %d\n" , area) ;
}

int main(){
    struct Rectangle r1 = {19 , 4} ;
    calculateArea(r1) ;
    return 0 ;
}