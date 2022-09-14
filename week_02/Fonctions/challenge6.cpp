
/*
Challenge 6 :
Écrivez un programme en C pour trier une liste d'éléments à l'aide de l'algorithme de tri à bulles (bubble sort).
*/

#include <stdio.h>


	void triBulles(int tab[] ,int n )
	{
		int i , j ,tmp =0;
		for (i=0 ; i < n-1; i++)
		  {
		    for (j=0 ; j < n-i-1; j++)
		    {
		      
		      if (tab[j] > tab[j+1]) 
		      {
		        tmp = tab[j];
		        tab[j] = tab[j+1];
		        tab[j+1] = tmp;
		      }
		    }
		  }
		printf("\ntableau triee par ordre croissant \n");
	 
	    
	   for (i=0; i < n; ++i)
	   {
	      printf("%4d", tab[i]);
	   }
	}
	int main()
	{
	  
	  int tab[100];
	        int n ,i;
	     	printf("Donner la taille d'une tableu : ");
	     	scanf("%d",&n);
	     		for(i=0;i<n;i++)
			 { 
			 	printf("T[%d] <= ",i+1);
			 	scanf("%d",&tab[i]);
			 }
	 
	    
	   for (i=0; i < n; ++i)
	   {
	      printf("%4d", tab[i]);
	   }
	 
	  triBulles(tab,n);
	  
	  return 0;	
	  
	}
