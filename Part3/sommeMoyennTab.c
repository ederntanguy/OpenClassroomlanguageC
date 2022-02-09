#include <stdlib.h>
#include <stdio.h>

int tabSomme(int tableau[], int tailleTableau, int *somme);
int tabMoyenne(int tableau[], int tailletableau, double *moyenne);

int main(int argc, char const *argv[])
{
    int tableau[10] = {0,1,2,3,4,5,6,7,8,9}, somme = 0, tailleTab = 10;
    double moyenne = 0;

    tabSomme(tableau, tailleTab, &somme);
    tabMoyenne(tableau, tailleTab, &moyenne);
    printf("la somme des nombre du tableau est : %d\nla moyenne des nombre du tableau est : %2.lf\n", somme, moyenne);

    return 0;
}

int tabSomme(int tableau[], int tailleTableau, int *somme)
{
    for (size_t i = 0; i < tailleTableau; i++)
    {
        *somme += tableau[i]; 
    }
    
    return 0;
}

int tabMoyenne(int tableau[], int tailletableau, double *moyenne)
{
    for (size_t i = 0; i < tailletableau; i++)
    {
        *moyenne += tableau[i];
    }
    *moyenne /= tailletableau;
    
    return 0;
}