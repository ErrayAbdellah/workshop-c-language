
/*
Challenge 9 :
Ecrivez un programme c pour trouver la puissance d'un nombre en utilisant des boucles while.
Le nombre de la base (>0) et l'exposant (>=0) sont pris dans les cas de test.
*/

#include<stdio.h>
#include<conio.h>



int main()
	{
		int x,y , i=1 ,p=1;
	    printf("donner Le nombre de la base x : ");
	    scanf ("%d",&x); 
	    printf("donner Le nombre de l'exposant y : ");
	    scanf ("%d",&y);
	    	
	    if(x==0)
			printf("Le resultat est 0");
	    else if (y==0)
	        printf("Le resultat est 1");
		else {
			while(i<=y) //y=4
			{
				p *= x;
				i++;
			}
			printf("Le resultat est %d",p);
			
		}
			
			getch();
			return 0;
	}
	
	
	
	
	
	
	
	
	
