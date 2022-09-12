/*
	Challenge 2: pyramide d'étoile
			      *
			     ***
			    *****
			   *******
			  *********
			 ***********
			*************
Écrire le programme pour avoir un pyramide d'étoile, le nombre des lignes à composer est demandé à l’utilisateur.
chaque ligne doit avoir un nombre premier d'étoiles.
*/

#include<stdio.h>

int main ()
{
     int nbr, i, j;
     printf("donner un nombre :");
     scanf ("%d",&nbr);
     
     for( i=1; i<=nbr;i++)
	 {
         for(j=nbr-i; j>=1;j--)
         printf(" ");
         
         for (j=1;j<=i+i-1; j++)
	     printf("*");
	     
	     printf("\n");
     }
     
	return 0;
}
