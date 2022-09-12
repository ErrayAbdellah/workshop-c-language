/*
	
	Ecrire un programme C piloté par menu pour convertir une année donnée en,

	Mois
	Jours
	Heures
	Minutes
	Secondes Pour plus de simplicité, n'incluez pas l'année bissextile (sauf si vous êtes courageux pour le faire). 
	1 an = 365 jours 1 mois = 30 jours
	
*/

#include<stdio.h>
#include<math.h>



int main()
{
	int annee, mois, jours, heures, minutes, secondes;
	int n;
    printf("veuillez entrer le nombre d'annee : ");
    scanf("%d",&annee);

    printf("veuillez choisir un nombre : \n");
    printf("1 : annee\n");
    printf("2 : mois\n");
    printf("3 : jours\n");
    printf("4 : minutes\n");
    printf("5 : heures\n");
    printf("6 : secondes\n");
    scanf("%d",&n);

    mois = annee*12;
    jours= annee*365;
    heures = annee * 8760;
    minutes = annee * 525600;
    secondes = annee *31540000;

    switch(n){
    case 1 : printf("annee est %d",annee);
    break;
    case 2 : printf("mois est %d", mois);
    break;
    case 3 : printf("jours est %d", jours);
    break;
    case 4 : printf("minutes est %d", minutes);
    break;
    case 5 : printf ("heures est %d", heures);
    break;
    case 6 : printf("secondes est %d",secondes);
    break;
    default :("erreur");
    break;

    }

    return 0;
}
