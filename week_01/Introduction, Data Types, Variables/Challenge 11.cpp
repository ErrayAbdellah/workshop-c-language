
/*
�crivez un programme pour trouver la circonf�rence d'un rectangle. 
Prenez la longueur et la largeur du rectangle en entr�e de l'utilisateur.
La formule pour la circonf�rence d'un rectangle = 2*(longueur + largeur).
*/

#include<stdio.h>
#include<conio.h>
#include<math.h>


int main()
	{
		double lar , lon ;
		double res ,r;
		
		printf("Entrez la longueur du rectangle :  \n");
		scanf("%lf",&lon);
		printf("Entrez la largeur du rectangle :  \n");
		scanf("%lf",&lar);
		
		res = 2*(lon+lar);
		
		printf("la circonf�rence d'un rectangle =  %8.2lf ",res);
		
		return 0;
	}
