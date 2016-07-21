#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    // declaring variables
    
    float input = 0.0f;
    float quarters = 25.0f;
    float dimes = 10.0f;
    float nickles = 5.0f;
    float pennies = 1.0f;
    int coins = 0;
    int change = 0; 
    
    
    // handling input 
    
    while(true)
    {
        printf("O hai! How much change is owed?\n");
        input = GetFloat();
        
        if ( input >= 0 )
        {
            break;
        }
    
    } 
    
    
    // converting float value into int after we multiply it by 100
    
    input = input * 100;
    change = (int) round(input);
    
    
    // start of greedy algorithm
    while ( change >= quarters )
    {
        coins++;
        change -= quarters;
    }   
    
    
    while ( change >= dimes )
    {
        coins++;
        change -= dimes;
    }
    
    while (  change >= nickles )
    {
        coins++;
        change -= nickles;
    }
    
    while ( change >= pennies  )
    {
        coins++;
        change -= pennies;
    }
    
    // print out the number of coins used
    
    printf("%d\n", coins);
    
}
