#include <stdlib.h>
#include <stdio.h>
#include <math.h>

// prototype
int lePGCD(int num1, int num2, int *PGCD);
int calculeDelata(double a, double b, double c, double *delta);
int calculeRacines(double delta, double a, double b, double *x1, double *x2);

int main(int argc, char const *argv[])
{
    int choix = 0, nombre1 = 0, nombre2=0, reponse = 0, recommencer = 1;
    double division1 = 0, division2 = 0, repdivision = 0;
    while (recommencer == 1)
    {
        printf("Bienvenu dans la super calculatrice de Edern\n\n");
        printf("Que voulez-vous faire?\naddition 1)\nsoustraction 2)\nmultiplication 3)\ndivision 4) \nmodulo )5\nle PGCD de deux nombres 6)\nresoudre un polynome du second degré 7)\n\n");
        scanf("%d", &choix);
        if (choix == 4)
        {
            printf("veulliez entrer deux nombres decimaux\n");
            scanf("%lf", &division1);
            printf("diviser par\n");
            scanf("%lf", &division2);
        } else if (choix == 7)
        {
        }
        else 
        {
            printf("veuillez entrer deux nombres entier\n");
            scanf("%d", &nombre1);
            scanf("%d", &nombre2);
        }
        if (choix == 1)
        {
            reponse = nombre1 + nombre2;
            printf("la reponse est %d\n", reponse);
        }
        else if (choix == 2)
        {
            reponse = nombre1 - nombre2;
            printf("la reponse est %d\n", reponse);
        }
        else if (choix == 3)
        {
            reponse = nombre1 * nombre2;
            printf("la reponse est %d\n", reponse);
        }
        else if (choix == 4)
        {
            repdivision = division1 / division2;
            printf("la reponse est %.2f\n", repdivision);
        }
        else if (choix == 5)
        {
            reponse = nombre1 % nombre2;
            printf("la reponse est %d\n", reponse);
        }
        else if (choix == 6)
        {
            lePGCD( nombre1, nombre2, &reponse);
            printf("la reponse est %d\n", reponse);
        }
        else if (choix == 7)
        {
            double a = 0, b = 0, c = 0; 
            double delta = 0;
            double x1 = 0, x2 = 0;

            // demande des valeurs
            printf("calcule de votre equiation du second degrer\nVeuillez entrer en premier la valeur X au carré\n");
            scanf("%lf",&a); 
            printf("veuillez entrer la valeur de X\n");
            scanf("%lf",&b);
            printf("veuillez entrer la valeur de l'unité\n");
            scanf("%lf",&c);

            calculeDelata(a,b,c,&delta); // calcule du delta

            printf("delta = %.2lf\n", delta);

            if (delta >= 0) // permet d'enelver le cas de delta negatif
            {
                calculeRacines(delta,a,b,&x1,&x2);
                if (x1 == x2) // si x1 = x2 alors il n'y qu'une solution
                {
                    printf("votre equation possede une seule solution x = %.2lf\n", x1);
                } else
                {
                    printf("votre equation possede deux solution x1 = %.2lf et x2 = %.2lf\n", x1, x2);
                }

            } else
            {
                printf("votre quation ne possede pas de solution\n");
            }
        }
        
        printf("voulez vous refaire un calcul ?\noui 1)\nnon 2)\n");
        scanf("%d", &recommencer);
    }
    
    return 0;
}

int lePGCD(int num1, int num2, int *PGCD)
{
    int leMax = 0, leMin = 1;

    if (num2 > num1) // savoir + petite valeurs pour savoir la valeurs max du PGCD
        leMax = num1;
    else 
        leMax = num2;
    if ((num1 % leMax == 0) && (num2 % leMax == 0)) // au cas ou la plus petite valeur est le PGCD
        *PGCD = leMax;
        
    while (!((num1 % leMax == 0) && (num2 % leMax == 0))) // trouver le PGCD
    {
        leMax--;
        *PGCD = leMax;
    }
    return 0;
}

int calculeDelata(double a, double b, double c, double *delta)
{
    *delta = pow(b,2)-(4*a*c); // fonction puissance
    return 0;
}

int calculeRacines(double delta, double a, double b, double *x1, double *x2)
{
    if (delta == 0) 
    {
        *x1 = (-b)/(2*a);
        *x2 = (-b)/(2*a);
    }
    else if (delta > 0)
    {
        *x1 = (-b-sqrt(delta))/(2*a); // fonction racine carré
        *x2 = (-b+sqrt(delta))/(2*a);
    }  
    return 0;
}