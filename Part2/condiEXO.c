#include <stdlib.h>
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int choixMenu = 0;
    printf("=== Menu ==\n1. Royal CHeese\n2. Mc Delux\n3. Mc Bacon\n4. Big Mac\nVotre choix ?\n");
    scanf("%d",&choixMenu);
    switch (choixMenu)
    {
    case 1:
        printf("Vous avez choisi le menu Royal CHeese\n");
        break;
    case 2:
        printf("Vous avez choisi le menu Mc Delux\n");
        break;
    case 3:
        printf("Vous avez choisi le menu Mc Bacon\n");
        break;
    case 4:
        printf("Vous avez choisi le menu Big Mac\n");
        break;
    
    default:
        printf("Vous n'avez pas choisi un numeros de menu correcte\n");
        break;
    }
    return 0;
}



