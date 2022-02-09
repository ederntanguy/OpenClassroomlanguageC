#include <stdlib.h>
#include <stdio.h>


int main(int argc, char *argv[])
{
    FILE* fichier = NULL;
    int age = 0;

    fichier = fopen("test.txt", "a");

    if (fichier != NULL)
    {
        printf("tout marche au top frere");
        fputc('A', fichier); // Écriture du caractère A
        fputs("Salut les développeurs\nBienvenue sur OpenClassrooms !", fichier);
        fprintf(fichier, "Le Monsieur qui utilise le programme, il a %d ans", age);


        // On peut lire et écrire dans le fichier
    }
    else
    {
        // On affiche un message d'erreur si on veut
        printf("Impossible d'ouvrir le fichier test.txt");
    }

    return 0;
}