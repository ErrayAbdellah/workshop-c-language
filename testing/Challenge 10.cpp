
/*
�crivez un programme pour trouver la circonf�rence d'un cercle. Prenez le rayon du cercle en entr�e de l'utilisateur.
 La formule pour, la circonf�rence du cercle = 2pr ; o� r est le rayon.
*/

#include<stdio.h>
#include<conio.h>
#include<math.h>


int main()
	{
		const double pi = 3.14159265359 ;
		double res ,r;
		
		printf("Entrez Le rayon r :  \n");
		scanf("%lf",&r);
		
		res = 2*pi*r;
		printf("la circonf�rence du cercle est  %8.2lf ",res);
		
		getch();
		return 0;
	}
