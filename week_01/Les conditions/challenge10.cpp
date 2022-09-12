/*
	Ecrire un programme C qui lit une date au format 15/09/2012 et l'affiche sous le format suivant: 
	15-Septembre-2012.
*/

#include <stdio.h>

int main() {
	int jour, mois, annee;
	printf("veuillez enter une date jj-mm-aaaa : \n");
	scanf("%d %d %d",&jour,&mois,&annee);
	
	switch(mois){
		case 1 : printf("%d-Janvier-%d",jour,annee);
		break;
		case 2  : printf("%d-Fevrier-%d",jour,annee);
		break;
		case 3  : printf("%d-Mars-%d",jour,annee);
		break;
		case 4  : printf("%d-Avril-%d",jour,annee);
		break;
		case 5  : printf("%d-Mai-%d",jour,annee);
		break;
		case 6  : printf ("%d-Juin-%d",jour,annee);
		break;
		case 7  : printf ("%d-Juillet-%d",jour,annee);
		break;
		case 8  : printf("%d-Aout-%d",jour,annee);
		break;
		case 9  : printf("%d-Septembre-%d",jour,annee);
		break;
		case 10 : printf("%d-October-%d",jour,annee);
		break;
		case 11 : printf("%d-Novembre-%d",jour,annee);
		break;
		case 12 : printf("%d-Decembre-%d",jour,annee);
		break;
		default : printf("le mois n'exsiste pas");
		break;
	}
	
	
	return 0;
}
