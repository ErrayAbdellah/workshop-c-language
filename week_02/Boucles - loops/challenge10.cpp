
/*
	Challenge 10 :
Écrivez un programme en C pour calculer la somme du maximum de 10 nombres en ignorant les nombres négatifs du calcul.
*/

#include<stdio.h>
#include<conio.h>


int main()
	{
	int nbr , i=1 ,somme=0;
    printf("donner les nombres : ");
    
    while (i<=10)
	{
		scanf ("%d",&nbr);
		if(nbr<0)
    		continue;
    	else 
    	{
	    	somme += nbr;
			i++;
		}
	}
	
	printf("La somme : %d",somme);

	getch();
	return 0;
	}
