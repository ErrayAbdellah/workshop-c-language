
/*
Écrivez un programme pour trouver la circonférence d'un cercle. Prenez le rayon du cercle en entrée de l'utilisateur.
 La formule pour, la circonférence du cercle = 2pr ; où r est le rayon.
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
		printf("la circonférence du cercle est  %8.2lf ",res);
		
		getch();
		return 0;
	}
