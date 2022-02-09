#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//prototype de fonction 
int Tirer_au_hazard(int difficulte, int *nombre_mistere);

//Les fonctions
int Tirer_au_hazard(int difficulte, int *nombre_mistere)
{
    srand(time(NULL));          // srand et rand fonctionne ensemble mais il tire toujours les meme valeur 
    *nombre_mistere = rand() % (difficulte + 1);// pour ce faire on utilise time qui change tous le temps et on fais une 
                                    //division ou on prendra que le reste 
    return 0;
}




//Programme principal
int main(int argc, char const *argv[])
{
    int nombre_mistere=0, choix=1, difficulte=0, valeur_choisi=-1, nombre_vies=0 ; // choix = 1 car comme ca le joueur peut commencer la partie
    printf("Bonjour, vous allez jouer a un jeu, votre but est de trouver le nombre mystere\n"); //presentation 
    do
    {
        printf("Entrez 1 si vous voulez que le nombre tire soit entre 0 et 100\n"); //mise a disposition du choix de la difficulte
        printf("Entrez 2 si vous voulez que le nombre tire soit entre 0 et 1 000\n");
        printf("Entrez 3 si vous voulez que le nombre tire soit entre 0 et 10 000\n");
        printf("Si vous ne voulez plus jouer, entrer 0\n");

        scanf("%d",&choix);

        if (choix == 1)
        {
            difficulte = 100;
            nombre_vies = 10;
            printf("\nVous avez choisi la difficulte 1, vous avez 10 vies. Bonne chance!!\n\n");
            Tirer_au_hazard(difficulte, &nombre_mistere);
            //printf("%d\n",nombre_mistere);
            while (nombre_mistere!=valeur_choisi)
            {
                printf("Entrez un nombre\n");
                scanf("%d",&valeur_choisi);
                if(nombre_vies == 1)
                {
                    printf("Vous avaz perdu le nombre mistere etait %d\nRetenter votre chance!\n", nombre_mistere);
                    return 0;
                }
                else if(valeur_choisi < nombre_mistere)
                {
                    printf("\nC'est plus!!\n");
                    printf("Il vous reste %d vies\n\n", nombre_vies -= 1);
                }
                else if(valeur_choisi > nombre_mistere)
                {
                    printf("\nC'est moins!!\n");
                    printf("Il vous reste %d vies\n\n", nombre_vies -= 1);
                }
                else if(valeur_choisi > 100 )
                {
                    printf("Il faut rentrer un nombre valide");
                }
            }
            printf("Bravo, le nombre etait %d\nVous avez reussi en %d essais\n\n",nombre_mistere, 11 - nombre_vies);
        }
        else if(choix == 2)
        {
            difficulte = 1000;
            nombre_vies = 15;
            printf("\nVous avez choisi la difficulte 2, vous avez 15 vies. Bonne chance!!\n\n");
            Tirer_au_hazard(difficulte, &nombre_mistere);
            //printf("%d\n",nombre_mistere);
            while (nombre_mistere!=valeur_choisi)
            {
                printf("Entrez un nombre\n");
                scanf("%d",&valeur_choisi);
                if(nombre_vies == 1)
                {
                    printf("Vous avaz perdu le nombre mistere etait %d\nRetenter votre chance!\n", nombre_mistere);
                    return 0;
                }
                else if(valeur_choisi < nombre_mistere)
                {
                    printf("\nC'est plus!!\n");
                    printf("Il vous reste %d vies\n\n", nombre_vies -= 1);
                }
                else if(valeur_choisi > nombre_mistere)
                {
                    printf("\nC'est moins!!\n");
                    printf("Il vous reste %d vies\n\n", nombre_vies -= 1);
                }
            }
            printf("Bravo, le nombre etait %d\nVous avez reussi en %d essais\n\n",nombre_mistere, 16 - nombre_vies);
        }
        else if(choix == 3)
        {
            difficulte = 10000;
            nombre_vies = 20;
            printf("\nVous avez choisi la difficulte 3, vous avez 20 vies. Bonne chance!!\n\n");
            Tirer_au_hazard(difficulte, &nombre_mistere);
            //printf("%d\n",nombre_mistere);
            while (nombre_mistere!=valeur_choisi)
            {
                printf("Entrez un nombre\n");
                scanf("%d",&valeur_choisi);
                if(nombre_vies == 1)
                {
                    printf("Vous avaz perdu le nombre mistere etait %d\nRetenter votre chance!\n", nombre_mistere);
                    return 0;
                }
                else if(valeur_choisi < nombre_mistere)
                {
                    printf("\nC'est plus!!\n");
                    printf("Il vous reste %d vies\n\n", nombre_vies -= 1);
                }
                else if(valeur_choisi > nombre_mistere)
                {
                    printf("\nC'est moins!!\n");
                    printf("Il vous reste %d vies\n\n", nombre_vies -= 1);
                }
            }
            printf("Bravo, le nombre etait %d\nVous avez reussi en %d essais\n\n",nombre_mistere, 21 - nombre_vies);
        }
        printf("Voulez vous jouer?\n");
        printf("Entrer 1 si oui et 0 si non\n ");
        scanf("%d",&choix);
        if(choix == 1)
        {
            printf("Veillez faire un choix\n");
        }
        else
        {
            printf("Aucuns problemes, une prochaine fois peux etre\n");
            return 0;
        }

    }while(choix > 0); //Le programme fonctionne et se relance temps que le joueur veut jouer 

    return 0;
}