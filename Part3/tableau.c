#include <stdlib.h>
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int tableau[4];
    tableau[0] = 10;
    tableau[1] = 23;
    tableau[2] = 505;
    tableau[3] = 8;

    for (size_t i = 0; i <= 3; i++)
    {
        printf("%d\n", tableau[i]);
    }

    printf("%p\n", tableau);
    printf("%d\n", *tableau);
    printf("%d\n", *(tableau + 1));
    
    return 0;
}


