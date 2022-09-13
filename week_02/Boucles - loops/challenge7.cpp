
/*
	Challenge 7 :
Écrire un programme C qui calcule le nième terme de la suite de Fibonacci, définie comme suit: Un=Un-1+Un-2 où U1=U0=1.
*/

#include<stdio.h>
#include<conio.h>


int main()
	{
	  int n, nbr1 = 0, nbr2 = 1, suivant, i;
	 
	  printf("Entrez le nombre de termes : ");
	  scanf("%d", &n);
	 
	 
	  for (i = 0; i <=n; i++)
	  {
	    if (i <= 1)
	      suivant = i;
	    else
	    {
	      suivant = nbr1 + nbr2;
	      nbr1 = nbr2;
	      nbr2 = suivant;
	    }
	    printf("%d\n", suivant);
	  }
		getch();
		return 0;
	}
