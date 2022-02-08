#include <stdlib.h>
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int volume = 67;

    if (volume == 0)
    {
        printf("le volume est null\n");
        
    }
    else if (volume <= 70)
    {
        printf("le volume est correcte\n");
    }
    
    else
    {
        printf("le volume est trop fort\n");
    }
    
    return 0;
}
