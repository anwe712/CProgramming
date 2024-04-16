#include <stdio.h> //standard I/O library
#include <time.h> //time library  which has function and data types for handling date and time 

// display system date and time

int main()
{//entry point

    //get the current time
    time_t currentTime;  //time_t is a type provided by the time library to represnt time values 

    time(&currentTime); // here , time is the function which is called so that it can get the current time and store it in a variable named current time 

    //convert the current time into string format 

    char *timeString = ctime(&currentTime);// covert into human readbale format

    //print the cuurent time 
    printf("Current system date and time : %s " , timeString);

    return 0 ; 
}

