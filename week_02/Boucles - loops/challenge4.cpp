/*
	Challenge 4 :
�crire un programme C qui lit une s�rie d'entiers positifs inf�rieurs � 100 termin�e par 0.
Et qui doit n�gliger toute entr�e strictement sup�rieure � 100.
Puis calcule et affiche la somme et le max des �l�ments de cette s�rie.

*/


#include <stdio.h>

int main() {
     
    int nbr[100] , x , i , n,dr,somme;
    int T;
        x=i=n=dr=somme=0;
    printf("Veuillez entrer les nombres positifs inferieurs a 100 terminee par 0 : \n");
	
	do{
		scanf("%d",&nbr[i]);
		dr = nbr[i];
		if(nbr[i]>100) 
		{
			printf("Veuillez entrer les nombres positifs inferieurs a 100 terminee par 0 : \n");
			continue ;
		}
		i++;
		n++;
		
	}while(dr!=0);
	printf("%d \n",n-1);
	
	for(i=0;i<n;i++)
	{
		if(nbr[i]> x )
		{
			x = nbr[i];
		}
		somme += nbr[i];
	}
	
	printf("max est : %d \nLa somme est : %d",x,somme);
    return 0;
}
