#include <stdio.h>

int main(){
    char c = 'A' ;
    for (int i = 0 ; i < 128 ; i++)
    {
        printf("ASCII value of '%c' is %d\n",i , i);
    }
    return 0 ;


}