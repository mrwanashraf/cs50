#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // declaring variable
    
    int input;
    
    
    // handling input
    
    do
    {
        printf("\nheight: ");
        input = GetInt();
        
        if ( input == 0 )
        {
            return 0;
        }
    
    
    } while ( input < 1 || input > 23);
    
    
    // code starts here
    
    for ( int i = 0; i < input; i++ )
    {
        // handling spaces
        
        for ( int j = 0 ; j < input - i - 1 ; j++ )
        {
            printf("%s", " ");
        }
        
        // handling hashes
        
        for ( int k = 0 ; k < i + 2  ; k++ )
        {
            printf("%s","#");
        }
        
        printf("\n");
    
    }
    
}
