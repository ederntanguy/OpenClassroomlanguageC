#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(int argc, char const *argv[])
{
    const int MAX = 100, MIN = 1;
    int nombreMystere = 0, nombreUser = 1, vieUser = 5, jouer = 1;
    
    // permet d'initialiser une valeur aléatoir
    srand(time(NULL));
    nombreMystere = (rand() % (MAX - MIN + 1)) + MIN;

    while (jouer == 1)
    {
        printf("Bienvenu dans le jeux du nombre mystere !\n\nle but de ce jeux est de trouver le nombre mystère entre 1 et 100 en moins de 5 coups !\n\n");
        printf("veulliez choisir un premier nombre\n");
        vieUser = 5;
        while (vieUser>0)
        {    
            scanf("%d", &nombreUser);  
            if (nombreMystere < nombreUser){
                printf("-\n");
                vieUser--;
            }
            else if (nombreMystere > nombreUser){
                printf("+\n");
                vieUser--;
            }
            else if (nombreMystere == nombreUser){
                printf("Bravo\n");
                break;
            }
        }
        if (vieUser == 0)
        {
            printf("vous avez perdu car vous n'avez plus de vie\n\n");
            printf("Vouler-vous rejouer?\noui 1)\nnon 2)");
            scanf("%d", &jouer);
        }
        if (vieUser != 0)
        {
        printf("Vouler-vous rejouer?\noui 1)\nnon 2)\n");
        scanf("%d", &jouer);

        }
    }
    
    
    return 0;
}
