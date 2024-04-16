#include <stdio.h>
#include <stdbool.h>

bool prime(int num )
{
     //special case 
     if (num < 2 )
     {
        return false;
     }
     //check divisibility 
     int sqrt_num = sqrt(num) ;
     for (int i = 2 ; i <= sqrt_num ; i++)
     {
        if(num % i == 0 )
        {
            return false; // not prime 

        }
     }

     return true ; //prime
}