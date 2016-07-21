#include <cs50.h>
#include <stdio.h>


int main(void)
{
    // printing out
    
    printf("please enter the length of your shower in minutes\n");
    printf("minutes: ");
    
    // getting input
    
    int minutes = GetInt(); 
    
    // start of the program
    
    if ( minutes > 0 )
    {
        printf("bottles: %i\n", ( minutes * 12 ) );
    }
    
    else
    {
        printf("please type a positive number\n");
    }
    
}
