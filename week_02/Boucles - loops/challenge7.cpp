
/*
	Challenge 7 :
�crire un programme C qui calcule le ni�me terme de la suite de Fibonacci, d�finie comme suit: Un=Un-1+Un-2 o� U1=U0=1.
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
