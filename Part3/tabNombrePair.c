#include <stdlib.h>
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int tableau[5] = {65,23,24,2,0};
    for (size_t i = 0; i < 5; i++)
    {
        if ((tableau[i] % 2 )== 0 )
        {
            printf("%d\n", tableau[i]);
        }
        
    }
    
    return 0;
}