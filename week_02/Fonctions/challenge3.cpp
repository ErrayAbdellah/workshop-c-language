/*
	Challenge 3 :
Cr�ez une fonction bool isPremier() pour v�rifier si un nombre est premier ou non (constatez que le type de la fonction est bool,
donc vous devez cr�er votre type Bool).
*/

#include<stdio.h>
#include<conio.h>
#include<stdbool.h>

bool isPremier(int nbr)
{
	int i ,f=0 ;
	for(i=2;i<=(nbr/2);i++)
	{
		
		if(nbr%i==0){
		 f = 1;
			
			break;
		}
	}
	if(f==0) return true;
	else return false;
}

int main()
{
	int nbr ;
	bool bo ;
	
	printf("Donner le nombre a : ");
	scanf("%d",&nbr);
	
	bo = isPremier(nbr);
	
	(bo) ? printf("le nombre est premier") : printf("le nombre non premier");
	
	getch();
	return 0;
}
