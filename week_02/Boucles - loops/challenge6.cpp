
/*
	Challenge 6 :
Dans cet exercice on va procéder de la manière suivante: 
on parcourt avec une boucle for de compteur p, les entiers entre 2 et n, n étant le nombre entré par l’utilisateur (ligne 9).
Et, à chaque fois on fait un test de primalité sur p (lignes 11-15), s'il s’avère qu’il est premier on l'affiche sur le champ.
*/

#include<stdio.h>
#include<conio.h>


int main()
	{
	int nbr , i ,p;
    int f ;
    printf("donner un nombre : ");
    scanf ("%d",&nbr);
    
	for(p=2;p<nbr;p++)
	{
		f=1;
		for(i=2;i<p;i++)
			{
				if(p%i==0)
				{
			 		f=0;
			 	}
			}
		if(f!=0) 	printf("%d\n",p);
	}
		
		
		getch();
		return 0;
	}
