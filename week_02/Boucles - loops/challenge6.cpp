
/*
	Challenge 6 :
Dans cet exercice on va proc�der de la mani�re suivante: 
on parcourt avec une boucle for de compteur p, les entiers entre 2 et n, n �tant le nombre entr� par l�utilisateur (ligne 9).
Et, � chaque fois on fait un test de primalit� sur p (lignes 11-15), s'il s�av�re qu�il est premier on l'affiche sur le champ.
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
