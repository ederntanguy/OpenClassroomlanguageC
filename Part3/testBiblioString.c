#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char mots[] = "wouaf";
    int a = 0;

    a  = strlen(mots);
    printf("la longeur de la chaine %s est de %d charactère\n", mots, a);
    
    return 0;
}
