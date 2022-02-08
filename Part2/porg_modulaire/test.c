#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(int argc, char const *argv[])
{
    int a = 10, b = 10;
    while (a>0)
    {
        while (b>0)
        {
            printf("ca dessent\n");
            if (b == 5)
                break;
            
            b--;
        }
        printf("on te vois ou pas?\n");
        a--;
    }
    return 0;
}
